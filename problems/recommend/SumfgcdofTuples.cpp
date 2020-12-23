#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int k;
    cin >> k;
    int ans = 0;
    rep(i, k)
    {
        rep(j, k)
        {
            rep(l, k)
            {
                ans += gcd(i, gcd(j, l));
            }
        }
    }
    cout << ans << endl;
    return 0;
}