#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* A = new int[n];
    int* B = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] + B[i] << endl;
    }
    delete[] A;
    delete[] B;

    return 0;
}
