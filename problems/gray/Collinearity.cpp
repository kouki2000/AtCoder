#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
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
    rep(i, n)
    {
        rep(j, n)
        {
            if (i == j)
            {
                continue;
            }
            rep(k, n)
            {
                if (i == k || j == k)
                {
                    continue;
                }
                int a = x[j] - x[i], b = y[j] - y[i];
                int c = x[k] - x[i], d = y[k] - y[i];
                if (a * d == c * b)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}