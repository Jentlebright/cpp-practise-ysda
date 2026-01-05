#include <iostream>

using namespace std;

int main() {
    char mass_corpus[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
    'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << mass_corpus[i] << " ";
    }
    return 0;
}