#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mat[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                if (i == 2 && j == 2)
                {
                    count = 0;
                }
                else
                {
                    count = abs(2 - i) + abs(2 - j);
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}
