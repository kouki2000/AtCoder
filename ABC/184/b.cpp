#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    string s;
    cin >> n >> x;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == char(111))
        {
            x += 1;
        }
        else if (x >= 1 && s[i] == char(120))
        {
            x -= 1;
        }
    }
    cout << x << endl;
}