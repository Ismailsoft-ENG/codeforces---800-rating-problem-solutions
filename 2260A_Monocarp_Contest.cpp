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
        vector<int> a(n);
        int count = 0;
        int count0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count++;
        }
        if (count == 2)
        {
            if ((a[0] == 0) && (a[1] == 0))
            {
                cout << "0" << endl;
            }
            else
                cout << "-1" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((i == 0) || (i == n - 1))
                {
                    continue;
                }
                else
                {
                    if (a[i] == 0)
                    {
                        count0++;
                    }
                }
            }
            if ((a[0] == 1) && (a[n - 1] == 1))
            {
                if (count0 >= 2)
                {
                    cout << "2" << endl;
                }
                else
                    cout << "-1" << endl;
            }
            else if (a[0] == 0 && a[n - 1] == 0)
                cout << "0" << endl;
            else if (a[0] == 0 && a[n - 1] == 1)
            {
                if (count0 >= 1)
                {
                    cout << "1" << endl;
                }
                else
                    cout << "-1" << endl;
            }
            else if (a[0] == 1 && a[n - 1] == 0)
            {
                if (count0 >= 1)
                {
                    cout << "1" << endl;
                }
                else
                    cout << "-1" << endl;
            }
            else
                cout << "-1" << endl;
        }
    }

    return 0;
}
