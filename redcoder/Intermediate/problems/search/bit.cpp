#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, x, cnt = 0;
    vector<int> v;

    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int bit = 0; bit < (1<<n); bit++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum += v[i];
            }
        }
        if (sum == x) cnt += 1;
    }

    if (cnt > 0) cout <<  cnt << "通り" << endl;
    else cout << "No" << endl;

}