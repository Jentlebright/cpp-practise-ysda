#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int **matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[n];

    bool *seen = new bool[n*n + 1]();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] < 1 || matrix[i][j] > n*n) {
                cout << "NO\n";
                return 0;
            }
            if (seen[matrix[i][j]]) {
                cout << "NO\n";
                return 0;
            }
            seen[matrix[i][j]] = true;
        }

    int magic_sum = 0;
    for (int j = 0; j < n; j++)
        magic_sum += matrix[0][j];
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
            row_sum += matrix[i][j];
        if (row_sum != magic_sum) {
            cout << "NO\n";
            return 0;
        }
    }
    for (int j = 0; j < n; j++) {
        int col_sum = 0;
        for (int i = 0; i < n; i++)
            col_sum += matrix[i][j];
        if (col_sum != magic_sum) {
            cout << "NO\n";
            return 0;
        }
    }
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++) {
        diag1 += matrix[i][i];
        diag2 += matrix[i][n - 1 - i];
    }
    if (diag1 != magic_sum || diag2 != magic_sum) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    delete[] seen;
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
