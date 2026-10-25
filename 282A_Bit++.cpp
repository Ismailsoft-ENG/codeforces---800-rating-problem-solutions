#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int score = 0;
    while (n--)
    {
        string x;
        cin >> x;

        if (x == "X++")
        {
            score += 1;
        }
        else if (x == "++X")
        {
            score += 1;
        }
        else if (x == "--X")
        {
            score -= 1;
        }
        else
            score -= 1;
    }
    cout << score << endl;

    return 0;
}
