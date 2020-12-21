#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 5)
    {
        if (b == 5 && c == 7)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if (b == 7 & c == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    else
    {
        if (b == 5 && c == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}