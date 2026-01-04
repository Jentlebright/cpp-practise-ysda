#include <iostream>

using namespace std;

int main() {
    int* p_1 = new int;
    int* p_2 = new int;
    int* p_3 = new int;
    cin >> *p_1;
    cin >> *p_2;
    cin >> *p_3;
    int tema = 0;
    int* mid = nullptr;
    if ((*p_1 >= *p_2 && *p_1 <= *p_3) || (*p_1 <= *p_2 && *p_1 >= *p_3))
        mid = p_1;
    else if ((*p_2 >= *p_1 && *p_2 <= *p_3) || (*p_2 <= *p_1 && *p_2 >= *p_3))
        mid = p_2;
    else
        mid = p_3;
    if (mid != p_1) *p_1 += *mid;
    if (mid != p_2) *p_2 += *mid;
    if (mid != p_3) *p_3 += *mid;
    cout << *p_1 << " " << *p_2 << " " << *p_3;
}