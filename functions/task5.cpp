#include <iostream>

using namespace std;

int *factorial_ptr(int n)
{
    if (n < 0)
    {
        return nullptr;
    }
    int *pointer = new int(1);
    for (int i = 1; i <= n; i++)
    {
        *pointer *= i;
    }
    return pointer;
}

int main()
{
    int n;
    cin >> n;
    cout << *factorial_ptr(n) << endl;
    return 0;
}
