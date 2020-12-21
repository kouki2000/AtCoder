#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n)
    {
        cin >> l[i];
    }
    int ans = 0;
    rep(i, n)
    {
        rep(j, n)
        {

            rep(k, n)
            {
                if (i == j || j == k || i == k)
                {
                    continue;
                }
                int a = l[i] + l[j], b = l[j] + l[k], c = l[i] + l[k];
                cout << "a" << a << endl;
                cout << "b" << a << endl;
                cout << "c" << a << endl;
            }
        }
    }
    cout << ans << endl;
}