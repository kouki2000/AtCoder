#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n, m, q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int> A)
{
    if (A.size() == n + 1)
    {
        // calc score
        int now = 0;
        for (int i = 0; i < q; i++)
        {
            if (A[b[i]] - A[a[i]] == c[i])
            {
                now += d[i];
            }
        }
        ans = max(ans, now);
        return;
    }
    // 直前の数を入れる
    A.push_back(A.back());
    while (A.back() <= m)
    {
        dfs(A);
        A.back()++;
    }
}

int main()
{
    cin >> n >> m >> q;
    a = b = c = d = vector<int>(q);
    for (int i = 0; i < q; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    // 最初は長さ1、要素数字の1のvectorを渡す
    // 理由はdfsのwhileでA.backが空だと判定できないため
    dfs(vector<int>(1, 1));
    cout << ans << endl;
    return 0;
}