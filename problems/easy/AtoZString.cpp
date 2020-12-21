#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<long> a;
    vector<long> z;
    long ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == char(65))
        {
            a.push_back(i);
        }
        else if (s[i] == char(90))
        {
            z.push_back(i);
        }
    }

    cout << z.back() - a[0] + 1 << endl;
}