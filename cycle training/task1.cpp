#include <iostream>

using namespace std;
int main() {
    int number, fives_count = 0;
    cin >> number;
    while (number <= 5 && number > 0) {
        if (number == 5) {
            fives_count++;
        }
        cin >> number;
    }
    cout << "Количество пятёрок: " << fives_count;
    return 0;
}