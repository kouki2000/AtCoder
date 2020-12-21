#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;

    // 要素数mのvectorを宣言
    vector<vector<int>> s(m);
    for (int i = 0; i < m; i++) {
        int k; 
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a; 
            cin >> a; 
            a--;
            s[i].push_back(a);
        }
    }
}