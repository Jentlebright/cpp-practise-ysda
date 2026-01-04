#include <iostream>

using namespace std;

int main() {
    int* p_1 = new int;
    int* p_2 = new int;
    cin >> *p_1;
    cin >> *p_2;
    cout << "a: " << *p_1 * *p_1 << endl;
    cout << "b: " << *p_2 * *p_2;
    delete p_1;
    delete p_2;
    return 0;
}