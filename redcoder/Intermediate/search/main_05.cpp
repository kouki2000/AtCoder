#include <iostream>
using namespace std;

int n;
int a[25];
int K;

int  main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> K;

    bool exist = false;

    // (1<<n) = 2^n
    for (int bit = 0; bit < (1<<n); bit++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum += a[i];
            }
        }
        if (sum == K) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}