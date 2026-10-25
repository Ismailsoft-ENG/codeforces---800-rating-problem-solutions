#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int P[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> P[i];
    }
    int m = 1;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (P[i] == m)
            {
                cout << i <<" ";
            }
        }
        m++;
        
    }

    return 0;
}
