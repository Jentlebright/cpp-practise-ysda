#include <iostream>

using namespace std;

int main() {
    long long number, checker = 1, now, last;
    cin >> number;
    now = number % 10;
    number /= 10;
    while (number > 0) {
        last = number % 10;
        number /= 10;
        if (now <= last) {
            now = last;
        }
        else {
            cout << "Цифры не в порядке!";
            checker = 0;
            break;
        }
    }
    if (checker > 0) {
        cout << "Цифры в порядке восхождения!";
    }
    return 0;
}