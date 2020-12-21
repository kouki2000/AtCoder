#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    for (int i = a; i <= 10000000; i++)
    {
        ans += a;
        if (ans % b == c)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}