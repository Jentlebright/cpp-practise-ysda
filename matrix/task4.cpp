#include <iostream>

using namespace std;
int main() {
    int rows, cols;
    cin >> rows >> cols;
    int **matrix;
    matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int first_swap, second_swap;
    cin >> first_swap >> second_swap;

    int *col_to_help;
    col_to_help = new int [rows];
    for (int i = 0; i < rows; i++) {
        col_to_help[i] = matrix[i][second_swap - 1];
    }


    for (int i = 0; i < rows; i++) {
        matrix[i][second_swap - 1] = matrix[i][first_swap - 1];
        matrix[i][first_swap - 1] = col_to_help[i];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}