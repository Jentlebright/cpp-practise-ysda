#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n, howmuch = 0;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int* result_massive = new int[n];
    int count = 0; // просто нужен чтобы считать найденные элементы

    for (int i = 0; i < n; ++i) {
        if (find(b, b + n, a[i]) != b + n) {
            bool exists = false;
            for (int j = 0; j < count; j++) {
                if (result_massive[j] == a[i]) {
                    exists = true;
                    break;
                }
            }
            if (!exists) {
                result_massive[count] = a[i];
                count++;
            }
        }
    }

    sort(result_massive, result_massive + count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += result_massive[i] * result_massive[i];
    }

    for (int i = 0; i < count; i++) {
        cout << result_massive[i] << " ";
    }
    cout << endl;
    cout << "Сумма квадратов: " << sum << endl;

    delete[] a;
    delete[] b;
    delete[] result_massive;

    return 0;
}