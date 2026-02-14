#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cols, rows;
    cin >> cols >> rows;
    int matrix[cols][rows], matrixT[rows][cols];
    
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrixT[i][j] = matrix[j][i];
        }
    }

    cout << endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrixT[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}