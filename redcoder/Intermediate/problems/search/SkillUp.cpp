#include <iostream>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    int tmp[n][m];
    int c[n];

    for (int i = 0; i < n; i++) {
        cin >> c[i];
        for (int j = 0; j < n; j++) {
            cin >> tmp[i][j];
        }
    }

    for (int bit = 0; bit < (1<<n); bit++ ) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                sum += c[i];
            }
        }
    }


}