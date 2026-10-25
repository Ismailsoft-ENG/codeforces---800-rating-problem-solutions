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
        int i = 0;
        int j = n - 1;
        int count = 0;
        if (n <= 2)
        {
            while (i <= j)
            {
                if (a[i] != a[j])
                {
                    count += 1;
                }
                i++;
                j--;
            }
        }
        else
        {
            while (i <= j)
            {

                if (a[i] != a[j])
                {
                    count += 2;
                }
                i++;
                j--;
            }
        }
        cout << count << endl;
    }

    return 0;
}
