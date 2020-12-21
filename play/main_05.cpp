#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int m, n, k;
    cin >> m >> n >> k;
    int a[k];
    int cnt[m + 1];
    rep(i, k)
    {
        cin >> a[i];
    }
    rep(i, m + 1)
    {
        if (i == m)
        {
            cnt[i] = k;
        }
        else
        {
            cnt[i] = 0;
        }
    }

    rep(i, k)
    {
        rep(j, m + 1)
        {
            if (cnt[j] > 0 && j != (a[i] - 1))
            {
                cnt[j] -= 1;
                cnt[a[i] - 1] += 1;
            }
        }
    }
    rep(i, m + 1)
    {
        if (cnt[i] == *max_element(cnt, cnt + m + 1))
        {
            cout << i + 1 << endl;
        }
    }
}