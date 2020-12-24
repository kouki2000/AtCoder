#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    rep(i, s.length() - 1)
    {
        if (s[i] == '0')
        {
            if (s[i + 1] == '0')
            {
                ans += 1;
                s[i + 1] = '1';
            }
        }
        else
        {
            if (s[i + 1] == '1')
            {
                ans += 1;
                s[i + 1] = '0';
            }
        }
    }
    cout << ans << endl;
    return 0;
}