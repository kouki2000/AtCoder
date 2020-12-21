#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

const int mod = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    ll ans = 0;
    ll x = 0;
    rep(i, n)
    {
        ans = (ans + (ll)a[i] * x) % mod;
        x = (x + a[i]) % mod;
    }
    cout << ans << endl;
    return 0;
}