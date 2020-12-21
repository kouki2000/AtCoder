#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());

    int alice = a[0];
    int bob = a[1];

    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            alice += a[i];
        }
        else
        {
            bob += a[i];
        }
    }

    cout << alice - bob << endl;
}