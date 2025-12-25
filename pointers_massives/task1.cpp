#include <iostream>

int main() {
    char ch, inp;
    std::cin >> inp;

    // Ваш код здесь, остальное писать не нужно
    char* p_ch = &ch;
    *p_ch = inp + 1;

    std::cout << *p_ch << std::endl;
    return 0;
}