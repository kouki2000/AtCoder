#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int func(string s, string t)
{
    int ans = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        bool founds = false;
        bool foundt = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                founds = true;
            }
        }
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == c)
            {
                foundt = true;
            }
        }
        if (founds && foundt)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        int tmp = func(s.substr(0, i), s.substr(i));
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}