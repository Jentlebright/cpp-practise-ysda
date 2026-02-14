#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int rows = n;
    int cols = n;
    int **matrix;
    matrix = new int *[rows];
    int summarizer = 0;
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        summarizer += matrix[i][i];
    }

    cout << summarizer;
    return 0;
}