#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sub = n - 1;
        int add = n + 1;

        if (add % 3 == 0)
        {
            cout << "First" << endl;
        
        }
        else if (sub % 3 == 0)
        {
            cout << "First" << endl;
            
        }
        else
        {
            for (int i = 1; i <= 10; i++)
            {
                add += i;
            }
            if (add % 3 == 0)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        }
    }

    return 0;
}
