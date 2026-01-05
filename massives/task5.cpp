#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int h[100];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << h[i] + h[i + 1] << endl;
    }

    return 0;
}
