#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    for (int i = 2; number; i++) {
        if (number % i != 0) {
            continue;
        }
        else {
            cout << i << " ";
            break;
        }
    }

    return 0;
}