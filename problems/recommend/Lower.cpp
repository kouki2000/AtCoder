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
    vector<int> h(n);
    int cnt = 0;
    int ans = 0;
    rep(i, n)
    {
        cin >> h[i];
    }

    rep(i, n - 1)
    {
        int val = h[i];
        int high = h[i + 1];
        if (val >= high)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}