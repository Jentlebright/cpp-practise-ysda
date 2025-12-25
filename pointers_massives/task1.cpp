#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    // Ваш код здесь, остальное писать не нужно
    int* p_a = &a;
    int* p_b = &b;

    std::cout << *p_a + *p_b << std::endl;
    return 0;
}