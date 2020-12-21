#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
int INF = 1001001001;

int main()
{
    long long x, k, d;
    cin >> x >> k >> d;
    long long ans;
    x = abs(x);
    if (x / d >= k)
    {
        ans = x - d * k;
    }
    else
    {
        long long e = x / d;
        k -= e;
        x -= e * d;
        if (k % 2 == 1)
        {
            x = abs(x - d);
        }
        ans = x;
    }
    cout << ans << endl;
}