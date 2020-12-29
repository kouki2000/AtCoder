#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> cnt(m);
    rep(i, n)
    {
        int k;
        cin >> k;
        rep(j, k)
        {
            int A;
            cin >> A;
            A--;
            cnt[A]++;
        }
    }
    int ans = 0;
    rep(i, m)
    {
        if (cnt[i] == n)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}