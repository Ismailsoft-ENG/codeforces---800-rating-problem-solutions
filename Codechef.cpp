#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, F;
    cin >> X >> Y >> F;
    int xcost = X * 12;
    int ycost = Y * 12;
    int fcost = ycost + F;
    int mn = min(xcost, fcost);
    cout << mn << endl;

    return 0;
}
