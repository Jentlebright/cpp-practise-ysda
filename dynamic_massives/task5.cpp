#include <iostream>
using namespace std;

int main() {
    int n, size = 0;
    int* arr = nullptr;

    while (cin >> n && n != 0) {
        int* tmp = new int[size + 1];
        for (int i = 0; i < size; i++)
            tmp[i] = arr[i];
        tmp[size++] = n;
        delete[] arr;
        arr = tmp;
    }

    for (int i = 0; i < size / 2; i++) {
        int sum = arr[i] + arr[size - 1 - i];
        arr[i] = arr[size - 1 - i] = sum;
    }

    for (int i = 0; i < size; i++)
        cout << arr[i] << (i + 1 < size ? " " : "");

    delete[] arr;
    return 0;
}