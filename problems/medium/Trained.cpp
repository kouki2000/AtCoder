#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ans = 1;
    while (true)
    {
        if (ans == 2)
        {
            cout << cnt << endl;
            return 0;
        }
        ans = v[ans - 1];
        cnt++;

        if (cnt >= n + 1)
        {
            cout << -1 << endl;
            break;
        }
    }
}