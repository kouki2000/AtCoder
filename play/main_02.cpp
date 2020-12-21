#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }

    auto dist = [&](int i, int j) {
        double dx = x[i] - x[j];
        double dy = y[i] - y[j];
        return sqrt(dx * dx + dy * dy);
    };

    double len = 0;
    int cnt = 0;

    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            len += dist(p[i], p[i + 1]);
        }
        cnt += 1;
    } while (next_permutation(p.begin(), p.end()));

    cout << len / cnt << endl;

    return 0;
}