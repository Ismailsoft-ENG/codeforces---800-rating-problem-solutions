#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int store;

    for (int i = n+1; i <= m; i++)
    {
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            store = i;
            break;
        }
       
    }
     if (store == m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    return 0;
}
