#include <iostream>
using namespace std;

int solve(int a, int b, int c, int x, int y)
{
    int ans = 0;
    int ans1 = 1000000007;
    int ans2 = 1000000007;
    if (a + b < c * 2)
    {
        ans = x * a + y * b;
        return ans;
    }
    else
    {
        int l = min(x, y);
        ans1 = l * 2 * c + (x - l) * a + (y - l) * b;
        int r = max(x, y);
        ans2 = r * c * 2;
        int result = min(ans1, ans2);
        return result;
    }
}

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    cout << solve(a, b, c, x, y) << endl;
}