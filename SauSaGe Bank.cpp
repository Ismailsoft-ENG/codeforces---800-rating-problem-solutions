#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == k)
            cout << n * 2 << endl;
        else
        {
            int sub = n - k;
            int i = 1;
            int score = 1;
            for (int j = 1; j <= sub; j++)
            {
                score = score * 2;
            }
            int score1 = score * 2;
            for (i = i + sub + 1; i <= n; i++)
            {
                score1 = score1 + 2;
            }
            cout << score1 << endl;
        }
    }

    return 0;
}
