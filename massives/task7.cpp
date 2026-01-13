#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxVal = a[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
    }
    cout << maxVal << endl;
    for (int i = maxIndex + 1; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
