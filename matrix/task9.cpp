#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    int num = 1;

    for (int d = 0; d < rows + cols - 1; d++) {
        int i_start, j_start;

        if (d < cols) {
            i_start = 0;
            j_start = d;
        } else {
            i_start = d - (cols - 1);
            j_start = cols - 1;
        }

        int i = i_start;
        int j = j_start;

        while (i < rows && j >= 0) {
            matrix[i][j] = num++;
            i++;
            j--;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
