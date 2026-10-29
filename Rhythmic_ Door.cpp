
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

        string S;
        cin >> S;

        int flag = 0;
        int count = 0;
        int count_b = 0;
        int ans = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'A')
            {
                count++;
                count_b = 0;

                if (count == 3)
                {
                    ans++;
                    count = 0;
                }
            }
            else
            {
                count_b++;
                count = 0;

                if (count_b == 3)
                {
                    ans++;
                    count_b = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
