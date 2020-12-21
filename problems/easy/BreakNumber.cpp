#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int calc(int val)
{
    int ans = 0;
    if (val % 2 == 1)
    {
        return 0;
    }
    else
    {
        while (val % 2 == 0)
        {
            ans++;
            val /= 2;
        }
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> cnt;
    for (int i = 1; i <= n; i++)
    {
        cnt.push_back(calc(i));
    }
    int ans = *max_element(cnt.begin(), cnt.end());
    rep(i, n)
    {
        if (cnt[i] == ans)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}