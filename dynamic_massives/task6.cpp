#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* pointer = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> pointer[i];
    }
    sort(pointer, pointer + n);
    if (n % 2 == 0) {
        cout <<  pointer[n / 2 - 1] << " " << pointer[n / 2];
    }
    else {
        cout << pointer[n / 2];
    }

    return 0;
}