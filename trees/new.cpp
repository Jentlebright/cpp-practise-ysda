#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n), pref(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i] = a[i] + (i ? pref[i - 1] : 0);
    }

    vector<int> ans(n, 0);

    ans[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--) {
        if (pref[i] > a[i + 1] && ans[i + 1]) {
            ans[i] = 1;
        } else {
            break;
        }
    }

    for (int x : ans) {
        cout << x << "\n";
    }

    return 0;
}