#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    int d[n];
    int ans = 0;
    int cnt = 6;
    int flag = 0;
    rep(i, n)
    {
        cin >> d[i];
    }
    rep(i, n - 6)
    {
        if (d[i] + d[i + 1] + d[i + 2] + d[i + 3] + d[i + 4] + d[i + 5] + d[i + 6] < 6)
        {
            if (flag == 0)
            {
                cnt += 1;
            }
            else
            {
                cnt = 7;
                flag = 0;
            }
        }
        else
        {
            cnt = 0;
            flag = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}