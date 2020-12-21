#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll s = 0, ans = 0;
    rep(j, n)
    {
        ans += (ll)a[j] * j;
        ans -= s;
        s += a[j];
    }
    cout << ans << endl;

    return 0;
}