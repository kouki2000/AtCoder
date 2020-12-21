#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int man = 0;
    double yukurid = 0.0;
    int chev = 0;

    for (int i = 0; i < n; i++)
    {
        man += abs(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        yukurid += abs(pow(v[i], 2));
    }

    for (int i = 0; i < n; i++)
    {
        chev = max(chev, abs(v[i]));
    }

    cout << man << endl;
    printf("%.15f\n", sqrt(yukurid));
    cout << chev << endl;
}