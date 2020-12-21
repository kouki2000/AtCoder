#include <iostream>
#include <string>
using namespace std;

int solve(int n) {
    int cnt = 0;
    int val = 0;
    for (int i = 1; i <= n; i++) {
        val = std::to_string(i).size();
        if (val %2 == 1) cnt += 1;
    }
    return cnt;
}

int main() {
    int N;
    cin >> N;

    cout << solve(N) << endl;

    return 0;
}