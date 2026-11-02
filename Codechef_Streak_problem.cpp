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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // your code goes here
        vector<int> v;
        vector<int> v1;
        int count_a = 0;
        int count_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                v.push_back(count_a);
                count_a = 0;
            }
            else
                count_a++;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                v1.push_back(count_b);
                count_b = 0;
            }
            else
                count_b++;
        }
        if (count_a == n)
        {
            v.push_back(count_a);
        }
        if (count_b == n)
        {
            v1.push_back(count_b);
        }
        int mx = *max_element(v.begin(), v.end());
        int mx1 = *max_element(v1.begin(), v1.end());
        if (mx > mx1)
            cout << "Om" << endl;
        else if (mx1 > mx)
            cout << "Addy" << endl;
        else
            cout << "Draw" << endl;
    }
}
