#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = a;
    int cnt = 1;
    if (b == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 1; i < 21; i++)
        {
            if (ans >= b)
            {
                break;
            }
            ans += (a - 1);
            cnt++;
        }
        cout << cnt << endl;
    }
}