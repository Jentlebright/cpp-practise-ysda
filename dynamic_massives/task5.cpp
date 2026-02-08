#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 10000;
    int arr[MAX_SIZE];
    int counter = 0;
    int n;

    while (true) {
        cin >> n;
        if (n == 0) break;
        arr[counter] = n;
        counter++;
    }

    for (int i = 0; i < counter / 2; i++) {
        int sum = arr[i] + arr[counter - 1 - i];
        arr[i] = sum;
        arr[counter - 1 - i] = sum;
    }

    for (int i = 0; i < counter; i++) {
        cout << arr[i];
        if (i < counter - 1) cout << " "; 
    }
    cout << endl;

    return 0;
}