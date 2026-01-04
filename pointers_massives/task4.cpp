#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int* pointer1 = &b;
    int* pointer2 = &a;
    cout << *pointer1 << " " << *pointer2;
}