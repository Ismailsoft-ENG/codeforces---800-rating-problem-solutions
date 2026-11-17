#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        int A[N];
        int B[M];
        int suma = 0;
        int sumb = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            suma += A[i];
        }
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
            sumb += B[i];
        }
        if (N < 4 || M < 4 || N + M < 11)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (N == M)
        {
            int total = (suma - 1) + sumb;
            cout << total << endl;
        }
        else
            cout << suma + sumb << endl;
    }

    return 0;
}
