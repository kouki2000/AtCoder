#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < b.size(); k++)
            {
                if (a[i][j] == b[k])
                {
                    a[i][j] = 0;
                }
            }
        }
    }

    if (a[0][0] + a[1][1] + a[2][2] == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else if (a[0][2] + a[1][1] + a[2][0] == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] + a[i][1] + a[i][2] == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
        else if (a[0][i] + a[1][i] + a[2][i] == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
