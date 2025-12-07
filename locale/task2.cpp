#include <iostream>

using namespace std;
int main() {
    int finalpoint;
    cin >> finalpoint;
    for (int i = 1; i <= finalpoint; i++) {
        if (i >= 5 && i <= 9) {
            continue;
        }
        if (i >= 17 && i <= 39) {
            continue;
        }
        if (i >= 78 && i <= 87) {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}