#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int n, m;

int a[60], b[60], c[60], d[60];

int func(int id)
{
    int best = INF;
    int ans = -1;
    rep(i, m)
    {
        int dist = abs(a[id] - c[i]) + abs(b[id] - d[i]);
        if (dist < best)
        {
            best = dist;
            ans = i;
        }
    }
    return ans + 1;
}

int main()
{
    cin >> n >> m;
    rep(i, n)
    {
        cin >> a[i] >> b[i];
    }
    rep(i, m)
    {
        cin >> c[i] >> d[i];
    }

    rep(i, n)
    {
        cout << func(i) << endl;
    }

    return 0;
}