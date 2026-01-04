#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string type;
    std::cin >> type;

    if (type == "int") {
        int x;
        std::cin >> x;
        std::cout << "Кажется это целое число: " << x
                  << " в ячейке: " << &x << std::endl;
    } else if (type == "double") {
        double x;
        std::cin >> x;
        std::cout << "Кажется это десятичное число: "
                  << std::fixed << std::setprecision(3) << x
                  << " в ячейке: " << &x << std::endl;
    } else if (type == "str") {
        std::string s;
        std::cin >> s;
        std::cout << "Кажется это строка: '" << s
                  << "' в ячейке: " << &s << std::endl;
    } else {
        std::cout << "Утка!" << std::endl;
    }

    return 0;
}