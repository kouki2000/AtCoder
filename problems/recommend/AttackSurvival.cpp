#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int a[q];
    int cnt[n];
    rep(i, q)
    {
        cin >> a[i];
    }
    rep(i, n)
    {
        cnt[i] = k - q;
    }

    rep(i, q)
    {
        cnt[a[i] - 1] += 1;
    }

    rep(i, n)
    {
        if (cnt[i] > 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}