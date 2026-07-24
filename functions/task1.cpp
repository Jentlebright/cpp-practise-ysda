#include <iostream>
using namespace std;

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                cout << ":) ";
            }
            else
            {
                cout << ":( ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_pattern(n);
    return 0;
}