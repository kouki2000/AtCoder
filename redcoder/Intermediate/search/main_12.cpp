#include <iostream>
#include <algorithm>
using namespace std;

int N, M;

void func(string cur)
{
    if (cur.size() == N)
    {
        cout << cur << endl;
        return;
    }
    int last = 1;
    if (cur.size() >= 1)
    {
        last = cur[cur.size() - 1];
    }
    for (int i = last; i <= M; i++)
    {
        string nex = cur;
        nex += ('0' + i);
        func(nex);
    }
}