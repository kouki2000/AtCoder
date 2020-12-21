#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<int> h(n);
    vector<bool> ok(n, true);
    int cnt = 0;
    rep(i, n)
    {
        cin >> h[i];
    }
    rep(i, m)
    {
        cin >> a >> b;
        a--;
        b--;
        if (h[a] <= h[b])
        {
            ok[a] = false;
        }
        if (h[b] <= h[a])
        {
            ok[b] = false;
        }
    }
    int ans = 0;
    rep(i, n)
    {
        if (ok[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}