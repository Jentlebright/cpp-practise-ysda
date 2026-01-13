#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char s[101][101];
    for (int i = 0; i < n; i++) {
        cin.getline(s[i], 101);
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++) {
        if ((int)strlen(s[i]) >= k) {
            cout << s[i][k - 1];
        }
    }
    return 0;
}
