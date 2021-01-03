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
    vector<int> x(n), y(n);
    rep(i, n)
    {
        cin >> x[i] >> y[i];
    }
    int cnt = 0;
    rep(i, n)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j || ((y[j] - y[i]) == 0) || ((x[j] - x[i]) == 0))
            {
                continue;
            }
            double ans = (y[j] - y[i]) / (x[j] - x[i]);
            if (ans <= 1.0 && ans >= -1.0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}