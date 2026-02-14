#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int rows = n;
    int cols = n;
    int **matrix;
    matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        swap(matrix[i][i], matrix[i][n - 1 - i]);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}