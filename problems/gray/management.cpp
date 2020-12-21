#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n;
    cin >> n;
    int val;
    vector<int> a(n, 0);
    rep(i, n - 1)
    {
        cin >> val;
        val--;
        a[val]++;
    }

    rep(i, n)
    {
        cout << a[i] << endl;
    }
}