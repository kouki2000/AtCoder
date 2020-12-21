#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S[2];
    float G[2];
    float tilt = 0;
    float intercept = 0;
    float ans = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < 2; i++)
    {
        cin >> G[i];
    }

    float a = (G[1] - ((-1) * S[1]));
    float b = (G[0] - S[0]);
    tilt = a / b;
    intercept = (-1) * tilt * G[0] + G[1];
    ans = -1 * (intercept / tilt);
    cout << fixed << setprecision(10) << ans << endl;
}