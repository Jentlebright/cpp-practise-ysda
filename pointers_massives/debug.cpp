#include <iostream>

using namespace std;

int main() {
    int* apartment = new int; // Арендовали квартиру под int  
    *apartment = 42; // Завезли диван, телевизор и 42  
    cout << "Указывает на адрес: " << apartment << endl; // Смотрим, где нашлось местечко
    cout << "Что там находится: " << *apartment << endl;  // Проверяем, что запись успешная...
    
    delete apartment; // Освободили квартиру  
    apartment = nullptr; // Выбросили ключи («Больше не живу тут!»)  
    return 0;
}