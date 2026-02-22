#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;
    int **matrix;
    matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                if (i < j) {
                    counter++;
                }
                else if (i > j && matrix[j][i] == 0) {
                    counter++;
                }
            }
        }
    }

    cout << counter;

    return 0;
}