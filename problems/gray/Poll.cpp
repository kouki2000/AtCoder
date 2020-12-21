#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;

    // 辞書 key:string, value:int
    map<string, int> mp;
    rep(i, n)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int cnt = 0;
    // mapのfor文  pにmpの要素が入る  p.first:key, p.second:value
    for (auto p : mp)
    {
        cnt = max(cnt, p.second);
    }
    for (auto p : mp)
    {
        if (p.second == cnt)
        {
            cout << p.first << endl;
        }
    }
    return 0;
}