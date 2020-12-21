#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    int ans = -1;
    while (x <= y)
    {
        ans++;
        x = min(x * a, x + b);
    }
    cout << ans << endl;
}