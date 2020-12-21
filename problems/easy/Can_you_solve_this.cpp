#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m >> c;
    int b[m];
    int a[n][m];
    int ans;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        ans = c;
        for (int j = 0; j < m; j++)
        {
            ans += a[i][j] * b[j];
        }
        if (ans > 0)
        {
            cnt += 1;
        }
    }

    cout << cnt << endl;
}