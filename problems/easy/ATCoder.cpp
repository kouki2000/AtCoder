#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    string s;
    cin >> s;
    string T = "ATCG";

    int ans = 0;
    int now = 0;
    rep(i, s.size())
    {
        bool isATCG = false;
        rep(j, T.size())
        {
            if (s[i] == T[j])
            {
                isATCG = true;
            }
        }
        if (!isATCG)
        {
            now = 0;
        }
        else
        {
            now++;
            ans = max(now, ans);
        }
    }

    cout << ans << endl;
    return 0;
}