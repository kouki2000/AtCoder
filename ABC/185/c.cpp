#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int l;
    cin >> l;
    ll ans = 1;
    for (int i = 1; i <= 11; i++)
    {
        ans *= l - i;
        ans /= i;
    }
    cout << ans << endl;
}