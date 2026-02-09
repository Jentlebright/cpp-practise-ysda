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

    int* numbers = new int[N];
    int counter = 0;
    for (int i = 0; i < N; i++) {
        
        for (int j = counter; j < 1000000; j++) {
            if (isPrime(j)) {
                numbers[i] = j;
                counter = j + 1;
                break;
            }
        }
    }

    for (int c = 0; c < N; c++) {
        cout << numbers[c] << " ";
    }

    return 0;
}
