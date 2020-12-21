#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;
int ans = 0;

int main()
{
    ll n;
    cin >> n;
    cout << n * (n - 1) / 2 << endl;
    // int P[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     P[i - 1] = i;
    // }
    // do
    // {
    //     int ret = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         ret += P[i - 1] % i;
    //     }
    //     ans = max(ans, ret);
    // } while (next_permutation(P, P + n));
    // cout << ans << endl;
}