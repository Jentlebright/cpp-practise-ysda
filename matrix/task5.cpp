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

    for (int j = 0; j < cols; j++) {
        for (int i = rows - 1; i >= 0; i--) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}