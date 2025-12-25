#include <iostream>

using namespace std;

int main() {
    int a, b;
    int *p_1 = &a;
    int *p_2 = &b;
    cin >> a >> b;
    double c;
    double *p_dbl = &c;
    *p_dbl = (double)(*p_1) / (*p_2);
    cout << *p_dbl;

    return 0;
}