#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> x(n), y(n);

    auto dist = [&](int i, int j) {
        double dx = x[i] - x[j];
        double dy = y[i] - y[j];
    };

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }

    double ans = 0;

    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            ans += (p[i], p[i + 1]);
        }
    } while (next_permutation(p.begin(), p.end()));
}