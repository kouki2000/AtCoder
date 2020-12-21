#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int taka = a;
    int aoki = c;

    do
    {
        taka -= d;
        aoki -= b;
    } while (taka <= 0 || aoki <= 0);

    if (taka >= 0 && aoki <= 0)
    {
        cout << "Yes" << endl;
    }
    else if (taka <= 0 && aoki >= 0)
    {
        cout << "No" << endl;
    }
}