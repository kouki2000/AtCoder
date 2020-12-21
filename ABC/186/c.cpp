#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    int ans = 0;
    int cnt = 1;
    cin >> n;
    bool ok[n];

    rep(i, n)
    {
        ok[i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        std::stringstream ss;
        ss << std::oct << i;
        std::string s = ss.str();
        if (s.find("7") != std::string::npos || std::to_string(cnt).find("7") != std::string::npos)
        {
            ok[cnt - 1] = true;
        }
        cnt++;
    }

    rep(i, n)
    {
        if (ok[i])
        {
            ans++;
        }
    }

    cout << n - ans << endl;

    return 0;
}