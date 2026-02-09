#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int* numbers = new int[N - 1];

    for (int i = 0; i < N - 1; i++) {
        numbers[i] = i + 2;
    }

    for (int i = 0; i < N - 1; i++) {
        if (isPrime(numbers[i])) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    delete[] numbers;
    return 0;
}
