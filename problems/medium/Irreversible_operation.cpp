#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    string s;
    cin >> s;
    long long ans = 0;
    long long cnt = 0, sum = 0;

    rep(i, s.size())
    {
        if (s[i] == char(66))
        {
            cnt++;
            ans += i;
        }
    }

    for (int i = s.size() - cnt; i < s.size(); i++)
    {
        sum += i;
    }
    cout << sum - ans << endl;
}