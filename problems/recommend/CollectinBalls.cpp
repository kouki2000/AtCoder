#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main()
{
    int n, k;
    cin >> n >> k;
    // vector<int> x(n);
    int a;
    int ans = 0;
    rep(i, n) {
        cin >> a;
        if(abs(k-a)<=a){
            ans += (k-a);
        }else{
            ans += a;
        }
    }

    cout << ans * 2 << endl;

    return 0;
}