#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int **matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            matrix[top][j] = num++;
        top++;

        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                matrix[bottom][j] = num++;
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                matrix[i][left] = num++;
            left++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
