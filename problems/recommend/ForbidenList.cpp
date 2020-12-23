#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    int up = x;
    int down = x;
    int up_cnt = 0;
    int down_cnt = 0;
    if (n == 0)
    {
        cout << x << endl;
    }
    else
    {
        rep(i, n)
        {
            cin >> p[i];
        }
        for (int i = 1; i < n; i++)
        {
            down -= 1;
            up += 1;
            rep(j, n)
            {
                if (p[j] == down)
                {
                    down_cnt = 1;
                }
                if (p[j] == up)
                {
                    up_cnt = 1;
                }
            }
            if (down_cnt < 1)
            {
                cout << down << endl;
                return 0;
            }
            if (up_cnt < 1)
            {
                cout << up << endl;
                return 0;
            }
            down_cnt = 0;
            up_cnt = 0;
        }
    }

    return 0;
}