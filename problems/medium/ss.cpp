#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

bool check(string s)
{
    int n = s.length();
    if (n % 2 == 1)
    {
        return false;
    }
    return (s.substr(0, n / 2) == s.substr(n / 2));
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = n - 1;; i--)
    {
        if (check(s.substr(0, i)))
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}