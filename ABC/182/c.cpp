#include <bits/stdc++.h>
using namespace std;

const int INF = 1001001001;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<int> c(3);
    for (int i = 0; i < n; i++)
    {
        // 文字をアスキーコードを使用して数値に変換
        c[(s[i] - '0') % 3]++;
    }

    // 全体の和
    int x = 0;
    for (int i = 0; i < 3; i++)
    {
        x += c[i] * i;
    }
    int ans = INF;

    // i1:1を消す個数　i2:2を消す個数
    for (int i1 = 0; i1 < 3; i1++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            // 存在する個数よりも多くは消せない
            if (c[1] < i1)
            {
                continue;
            }
            if (c[2] < i2)
            {
                continue;
            }
            // すべて消すことはできない
            if (i1 + i2 == n)
            {
                continue;
            }
            int nx = x;
            nx -= i1 * 1;
            nx -= i2 * 2;
            if (nx % 3 == 0)
            {
                ans = min(ans, i1 + i2);
            }
        }
    }
    if (ans == INF)
    {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}