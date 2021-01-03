#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;

int main()
{
    string a, b;
    cin >> a >> b;
    int first = 0;
    int second = 0;
    rep(i, 3)
    {
        int val = a[i] - '0';
        int cnt = b[i] - '0';
        first += val;
        second += cnt;
    }

    if (first >= second)
    {
        cout << first << endl;
        return 0;
    }

    cout << second << endl;

    return 0;
}