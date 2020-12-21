#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int clac(long long N)
{
    int res = 0;
    while (N > 0)
    {
        res++;
        N /= 10;
    }
    return res;
}

int main()
{
    long long N;
    cin >> N;
    int res = 1000000007;
    for (long long i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            long long j = N / i;
            int F = max(clac(i), clac(j));
            res = min(res, F);
        }
    }
    cout << res << endl;
}