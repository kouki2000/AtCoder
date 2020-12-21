#include <bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cin >> x;
    for (int i = x; i <= 100010; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}