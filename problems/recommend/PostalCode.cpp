#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;
    int ans = 0;
    rep(i, s.length())
    {
        if (i == a)
        {
            if (s[a] == '-')
            {
                ans++;
            }
        }
        else
        {
            int val = s[i] - '0';
            if (val >= 0 && val <= 9)
            {
                ans++;
            }
        }
    }

    if (ans == s.length())
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}