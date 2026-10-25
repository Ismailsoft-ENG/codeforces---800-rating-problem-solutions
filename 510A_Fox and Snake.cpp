#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0)
            {
                if (flag == 0)
                {
                    for (int k = 1; k <= m - 1; k++)
                    {
                        cout << '.';
                    }
                    cout << "#" << endl;
                    flag = 1;
                    break;
                }
                else
                {
                    cout << "#";
                    for (int k = 1; k <= m - 1; k++)
                    {
                        cout << '.';
                    }
                    flag = 0;
                    cout<<endl;
                    break;
                }
            }
            else
            {
                for (int k = 1; k <= m; k++)
                {
                    cout << "#";
                }
                cout << endl;
                break;
            }
        }
    }
}