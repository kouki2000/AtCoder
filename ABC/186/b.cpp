#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;
int minx = INF;
int maxx = 0;

int main()
{
    int h, w;
    cin >> h >> w;
    int a[h][w];
    int cnt = 0;
    int ans = 0;
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> a[i][j];
            minx = min(minx, a[i][j]);
            maxx = max(maxx, a[i][j]);
            cnt += a[i][j];
        }
    }

    if (maxx * h * w == cnt)
    {
        cout << 0 << endl;
    }
    else
    {
        rep(i, h)
        {
            rep(j, w)
            {
                ans += (a[i][j] - minx);
            }
        }
        cout << ans << endl;
    }

    return 0;
}