#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ar[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> ar[i][j];
            }
        }
        int count ;
        for (int k = 0; k < 5; k++)
        {
            count =0;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)

                    if (i == k || i == 9 - k || j == k || j == 9 - k)
                    {
                        if (ar[i][j] == 'X')
                        {
                            count++;
                        }
                    }
            }
        }
        cout << count << endl;
    }

    return 0;
}
