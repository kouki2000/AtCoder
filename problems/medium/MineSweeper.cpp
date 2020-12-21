#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int h, w;
    cin >> h >> w;
    string s[h];
    string around[h + 2][w + 2];
    rep(i, h + 2)
    {
        rep(j, w + 2)
        {
            around[i][j] = ".";
        }
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            around[i][j] = s[h];
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            cout << around[i][j];
        }
        cout << endl;
    }
}