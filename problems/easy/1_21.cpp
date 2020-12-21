#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a;
    cin >> b;

    int num = std::stoi(a + b);

    for (int i = 0; i * i <= num; i++)
    {
        if (i * i == num)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}