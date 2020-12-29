#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    const int val = 5;
    int a;
    vector<int> v(val);
    int cnt = 0;
    int ans = INF;
    rep(i, val)
    {
        cin >> a;
        v[i] = a;
    }
    // cin >> a >> b >> c >> d >> e;
    sort(v.begin(), v.end());

    do
    {
        for (auto x : v)
        {
            if (x / 10 == 0)
            {
                cnt += x + (10 - (10 % x));
            }
            else
            {
                int calc = x / 10;
                cnt += x + ((val + 1) * 10 - ((val + 1) * 10) % x);
                calc = 0;
            }
            ans = min(ans, cnt);
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << ans << endl;
    return 0;
}