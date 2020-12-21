#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 10010010;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i <= 100; i++)
    {
        int value = 0;
        for (int j = 0; j < v.size(); j++)
        {
            value += pow(v[j] - i, 2);
        }
        ans = min(value, ans);
    }
    cout << ans << endl;
}