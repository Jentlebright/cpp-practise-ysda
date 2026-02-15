#include <iostream>
#include <vector>
#include <sstream>


using namespace std;

int main() {
    int n_vertexes;
    cin >> n_vertexes;
    cin.ignore();
    
    int **matrix = new int*[n_vertexes];
    for (int i = 0; i < n_vertexes; i++) {
        matrix[i] = new int[n_vertexes]();
    }

    for (int i = 0; i < n_vertexes; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        int vertex;
        while (ss >> vertex) {
            matrix[i][vertex - 1] = 1;
        }
    }
    
    for (int i = 0; i < n_vertexes; i++) {
        for (int j = 0; j < n_vertexes; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}