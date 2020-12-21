#include <iostream>
using namespace std;

bool solve(int n) {
    int cnt = 0;
    for (int i = 0; i <= 25; i++) {
        for(int j = 0; j <= 14; j ++) {
            if (i*4 + j*7 == n) return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    if (solve(N) == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}