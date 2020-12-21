#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    int a[m], b[m];
    rep(i, m)
    {
        cin >> a[i] >> b[i];
    }
    ll ans = n - a[0];
    if (ans <= 0)
    {
        cout << "No" << endl;
        return 0;
    }

    rep(i, m)
    {
        ans += (b[i] - a[i]);
        if (ans >= n)
        {
            ans = n;
        }
        if (i != m - 1)
        {
            ans -= (a[i + 1] - b[i]);
            if (ans <= 0)
            {
                cout << "No" << endl;
                return 0;
            }
        }
        else if (i == m - 1)
        {
            ans -= (t - b[i]);
            if (ans <= 0)
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}