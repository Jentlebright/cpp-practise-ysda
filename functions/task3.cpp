#include <iostream>

using namespace std;

int get_next_prime(int n)
{
    int ans = 0;
    while (ans == 0)
    {
        int counter = 0;
        n++;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                counter++;
            }
        }
        if (counter == 2)
        {
            ans = n;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << get_next_prime(n) << endl;
    return 0;
}
