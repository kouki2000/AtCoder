#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int ans = 0;
    int cnt = 0;

    rep(i, n)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n);

    rep(i, n)
    {
        if (b[i] == a[n - 1])
        {
            cout << a[n - 2] << endl;
        }
        else
        {
            cout << a[n - 1] << endl;
        }
    }
}
