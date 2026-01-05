#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int massive[1000];
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            massive[cnt] = i;
            cnt++;
        }
    }

    for (int j = 0; j < cnt; j++) {
        cout << massive[j] << endl;
    }

    return 0;
}

