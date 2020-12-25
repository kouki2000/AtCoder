#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int INF = 1001001001;
int ans = 0;

int func(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        string s = std::to_string(i);
        if (s[0] == s[4] && s[1] == s[3])
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << func(a, b) << endl;
    return 0;
}