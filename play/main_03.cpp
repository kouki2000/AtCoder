#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x(5);
    for (int i = 0; i < 5; i++)
    {
        x[i] = i;
    }
    x.push_back(x.back());

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << x[i] << endl;
    // }
    x.back()++;
    for (int i = 0; i < 6; i++)
    {
        cout << x[i] << endl;
    }
}
