#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        if (a + i <= b)
        {
            ans.push_back(a + i);
        }
        if (b - i >= a)
        {
            ans.push_back(b - i);
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
    rep(i, ans.size())
    {
        cout << ans[i] << endl;
    }
    return 0;
}