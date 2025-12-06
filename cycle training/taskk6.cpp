#include <iostream>

using namespace std;

int main() {
    int num, reversedNum = 0, duplicate = 0;
    cin >> num;
    duplicate = num;
    while (num) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    if (reversedNum == duplicate) {
        cout << "Число является палиндромом!" << endl;
    } else {
        cout << "Число не является палиндромом." << endl;
    }
    return 0;
}
