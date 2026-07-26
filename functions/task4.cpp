#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    cout << "До вызова функции: " << endl
         << "a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "После вызова функции: " << endl
         << "a = " << a << ", b = " << b << endl;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    return 0;
}
