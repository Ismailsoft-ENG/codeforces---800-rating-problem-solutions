#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string S;
    cin >> S;

    deque<char> q;

    for (char c : S)
    {
        q.push_back(c);
    }

    int score = 0;

    while (!q.empty())
    {
        char current = q.front();
        q.pop_front();

        // V -> +5
        if (current == 'V')
        {
            score += 5;
        }

        // W -> +2
        else if (current == 'W')
        {
            score += 2;
        }

        // X -> remove next character
        else if (current == 'X')
        {
            if (!q.empty())
            {
                q.pop_front();
            }
        }

        // Y -> move next character to the end
        else if (current == 'Y')
        {
            if (!q.empty())
            {
                char next = q.front();
                q.pop_front();
                q.push_back(next);
            }
        }

        // Z -> divide score if next is V/W
        else if (current == 'Z')
        {
            if (!q.empty())
            {
                if (q.front() == 'V')
                {
                    score /= 5;
                    q.pop_front();
                }
                else if (q.front() == 'W')
                {
                    score /= 2;
                    q.pop_front();
                }
            }
        }
    }

    cout << score << '\n';

    return 0;
}     