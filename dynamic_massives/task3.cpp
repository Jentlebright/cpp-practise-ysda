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
    for (int i = 0; i < n; i++) {
        cout << pointer[i] << endl;
    }
    delete[] pointer;
    return 0;
}