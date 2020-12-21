#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int a[4];
    rep(i, 4)
    {
        cin >> a[i];
    }

    int min = *min_element(a, a + 4);
    cout << min << endl;
    return 0;
}