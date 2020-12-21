#include <bits/stdc++.h>
using namespace std;

vector<int> v;

void calc(int val)
{
    if (val == 1)
    {
        v[0] = val;
    }
    else
    {
        for (int i = 1; i * i <= val; i++)
        {
            if (val % i == 0)
            {
                v.push_back(i);
                if (i != val / i)
                {
                    v.push_back(val / i);
                }
            }
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    calc(n);
}