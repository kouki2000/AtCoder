#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
long long INF = 1000000000000000;

int main()
{
    long long x, k, d;
    cin >> x >> k >> d;

    long long ans = INF;
    rep(i, 1 << k)
    {
        long long dist = x;
        rep(j, k)
        {
            if (i >> j & 1)
            {
                dist -= d;
            }
            else
            {
                dist += d;
            }
        }
        long long cnt = abs(dist);
        ans = min(ans, cnt);
    }
    cout << ans << endl;
}