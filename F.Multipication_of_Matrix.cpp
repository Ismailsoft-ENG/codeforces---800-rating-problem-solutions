#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Ra, Ca;
    cin >> Ra >> Ca;
    int A[Ra][Ca];
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Ca; j++)
        {
            cin >> A[i][j];
        }
    }
    int Rb, Cb;
    cin >> Rb >> Cb;
    int B[Rb][Cb];
    for (int i = 0; i < Rb; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cin >> B[i][j];
        }
    }
    int C[Ra][Cb];
    memset(C, 0, sizeof(C));
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            for (int k = 0; k < Ca; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
