#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> a(N), b(N);
    int cnt = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] - b[i] * 5 >= M)
        {
            cout << cnt << endl;
        }
        else if (a[i] - b[i] * 5 < 0)
        {
            a[i] = 0;
            if (a[i] >= M)
            {
                cout << cnt << endl;
            }
        }
        cnt++;
    }

    return 0;
}