#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= h)
        {
            count++;
        }
        else
            count1 += 2;
    }
    cout << count + count1 << endl;

    return 0;
}
