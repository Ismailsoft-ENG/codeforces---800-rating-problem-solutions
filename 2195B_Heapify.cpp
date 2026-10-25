
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

        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        for (int i = 1; i <= n / 2; i++)
        {
            if (a[i - 1] > a[2 * i - 1])
            {
                swap(a[i - 1], a[2 * i - 1]);
            }
        }
        sort(b, b + n);

        bool flag = true;

        for (int k = 0; k < n; k++)
        {
            if (a[k] != b[k])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout <<"NO"<<endl;
        }
    }

    return 0;
}
