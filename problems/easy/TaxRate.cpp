#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cin >> n;

    for (int i = 1; i <= 50000; i++)
    {
        ans = i * 1.08;
        if (ans == n)
        {
            ans++;
            cout << i << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
}