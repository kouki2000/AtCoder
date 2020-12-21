#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
            break;
        }
    }

    if (cnt >= 1)
    {
        cout << "Bad" << endl;
    }
    else
    {
        cout << "Good" << endl;
    }
}