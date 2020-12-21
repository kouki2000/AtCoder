#include <iostream>
using namespace std;

int main() {
    int N, X, ans = 0;
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            for(int k = j + 1; k <= N; k++) {
                if(i + j + k == X) ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}