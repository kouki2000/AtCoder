#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h, w;
    cin >> h >> w;
    long long even = h * w / 2;
    long long odd = h * w / 2 + 1;

    if (h == 1 || w == 1)
    {
        cout << 1 << endl;
    }
    else if (h % 2 == 0 || w % 2 == 0)
    {
        cout << even << endl;
    }
    else if (h % 2 == 1 && w % 2 == 1)
    {
        cout << odd << endl;
    }
}