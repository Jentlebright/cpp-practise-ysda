#include <iostream>

using namespace std;

bool is_perfect(int n)
{
    long long counter = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            counter += i;
        }
    }
    return counter == n;
}

int main()
{
    int n;
    cin >> n;
    is_perfect(n);
    return 0;
}
