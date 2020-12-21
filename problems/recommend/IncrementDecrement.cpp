#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int x = 0;
    rep(i, s.length())
    {
        if (s[i] == char(73))
        {
            ans += 1;
        }
        else if (s[i] == char(68))
        {
            ans -= 1;
        }
        x = max(x, ans);
    }
    cout << x << endl;
    return 0;
}
