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

    for (int i = 0; i < n; i++) {
        int num = 1;
        bool hasOne = false;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 1) {
                cout << num << " ";
                hasOne = true;
                num++;
            }
            else {
                num++;
            }
        }
        if (!hasOne) cout << 0;
        cout << endl;
    }



    return 0;
}