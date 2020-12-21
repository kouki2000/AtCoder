#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int a, b;
    cin >> a >> b;
    int len = b - a;
    int high_b = len * (len + 1) / 2;
    int high_a = (len - 1) * ((len - 1) + 1) / 2;

    int cnt = 0;
    for (int i = high_b; i > 0; i--)
    {
        if (i == b && cnt + a == high_a)
        {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    }
}