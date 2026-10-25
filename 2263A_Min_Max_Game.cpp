#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count1 = 0;
        int count0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                count1++;
            else
                count0++;
        }
        if (count1 == count0)
            cout << "Bessie" << endl;
        else if (count1 > count0)
            cout << "Bessie" << endl;
        else
            cout << "Elsie" << endl;
    }

    return 0;
}
