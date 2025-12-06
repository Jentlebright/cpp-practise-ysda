#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n << endl;
    
    while (n >= 10) {
        long long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        cout << n << endl;
    }
    
    return 0;
}