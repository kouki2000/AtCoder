#include <bits/stdc++.h>
#include <vector>
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

    // [&]は必要なすべてのローカル変数を参照によって取得する
    auto dist = [&](int i, int j) {
        // x座標の差
        double dx = x[i] - x[j];
        // y座標の差
        double dy = y[i] - y[j];
        return sqrt(dx * dx + dy * dy);
    };

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = i;
    }
    double len = 0;
    int cnt = 0;
    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            len += dist(p[i], p[i + 1]);
        }
        cnt++;
    } while (next_permutation(p.begin(), p.end()));
    double ans = len / cnt;
    printf("%.10f\n", ans);
    return 0;
}