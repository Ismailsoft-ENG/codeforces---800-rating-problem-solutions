#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    if (x <= 5)
    {
        int mod1 = x % 1;
        int mod2 = x % 2;
        int mod3 = x % 3;
        int mod4 = x % 4;
        int mod5 = x % 5;
        if (mod1 == 0)
            cout << "1" << endl;
        else if (mod2 == 0)
            cout << "1" << endl;
        else if (mod3 == 0)
            cout << "1" << endl;
        else if (mod4 == 0)

            cout << "1" << endl;
        else if (mod5 == 0)
            cout << "1" << endl;
    }

    else
    {
        int num = x / 5;
        if (x % 5 == 0)
        {
            cout << num << endl;
        }
        else
        {
            x = x - num;
            int mod1 = x % 1;
            int mod2 = x % 2;
            int mod3 = x % 3;
            int mod4 = x % 4;
            if (mod1 == 0)
                cout << num + 1 << endl;
            else if (mod2 == 0)
                cout << num + 1 << endl;
            else if (mod3 == 0)
                cout << num + 1 << endl;
            else if (mod4 == 0)
                cout << num + 1 << endl;
        }
    }

    return 0;
}
