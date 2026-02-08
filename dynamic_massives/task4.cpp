#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;
    int* pointer_reversed = new int[n];
   
    for (int i = 0; i < n; i++) {
        cin >> pointer_reversed[i];
    }
    
    for (int j = n - 1; j >= 0; j--) {
        cout << pointer_reversed[j] << endl;
    }
    delete [] pointer_reversed;
    return 0;
}