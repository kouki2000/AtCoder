#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> b(n - 1);
    rep(i, n - 1)
    {
        cin >> b[i];
    }
    vector<int> a(n);
    a[0] = b[0];
    for (int i = 1; i <= n - 2; i++)
    {
        a[i] = min(b[i], b[i - 1]);
    }
    a[n - 1] = b[n - 2];
    int ans = 0;
    rep(i, n)
    {
        ans += a[i];
    }
    cout << ans << endl;

    return 0;
}