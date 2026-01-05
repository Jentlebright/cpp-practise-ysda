#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int Array[n];
    for (int i = 0; i < n; i++) {
        Array[i] = i + 1;
        cout << Array[i] << endl;
    }
    return 0;
}