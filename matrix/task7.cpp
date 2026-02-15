#include <iostream>

using namespace std;

int main() {
    int rows;
    int cols;
    cin >> rows >> cols;
    int **matrix;
    int num = 1;
    matrix = new int *[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = num;
                num++;
            }
        }
        else {
            for (int j = cols - 1; j >= 0; j--) {
                matrix[i][j] = num;
                num++;
            }
        }
    }

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}