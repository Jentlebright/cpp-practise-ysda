#include <iostream>

using namespace std;
int main() {
    int a, b, counter = 0;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++) {
        counter = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                counter++;
            }
            if (counter > 2) {
                break;
            }
        }
        if (counter == 2) {
            cout << i << endl;
            counter = 0;
        }
    }
    return 0;
}