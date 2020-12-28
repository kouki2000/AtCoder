#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int func(string s)
{
    int val = std::stoi(s);
    return abs(753 - val);
}

int main()
{
    string s;
    cin >> s;
    int ans = INF;
    int cnt = s.length() - 2;
    rep(i, cnt)
    {
        string result = s.substr(i, 3);
        ans = min(ans, func(result));
    }
    cout << ans << endl;
    return 0;
}