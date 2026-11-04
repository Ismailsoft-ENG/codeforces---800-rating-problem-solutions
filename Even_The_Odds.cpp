#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            int cnt = 0;

            for (int j = i; j < N; j++)
            {
                if (A[j] % 2 == 1)
                {
                    cnt++;
                }
                if (cnt % 2 == 0)
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}