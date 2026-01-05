#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int massive[n]; {}
    for (int i = 0; i < n; i++) {
        int elem_to_add;
        cin >> elem_to_add;
        massive[i] = elem_to_add * elem_to_add * elem_to_add;
    }
    for (int j = 0; j < n; j++) {
        cout << massive[j] << endl;
    }
    return 0;
}