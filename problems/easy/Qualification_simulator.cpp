#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;

    int rank = 0;
    int rank_b = 0;

    for (int i = 0; i < n; i++)
    {

        // a
        if (s[i] == char(97))
        {
            if (rank < a + b)
            {
                rank++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        // b
        else if (s[i] == char(98))
        {
            if (rank < a + b && rank_b < b)
            {
                rank++;
                rank_b++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        // c
        else if (s[i] == char(99))
        {
            cout << "No" << endl;
        }
    }
}