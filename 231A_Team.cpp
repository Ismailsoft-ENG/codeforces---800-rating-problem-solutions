#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 3;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                count++;
            }
        }
        v.push_back(count);
        count = 0;
    }
    int count1 = 0;
    for (int x : v)
    {
        if (x >= 2)
        {
            count1++;
        }
    }
    cout << count1 << endl;
    return 0;
}
