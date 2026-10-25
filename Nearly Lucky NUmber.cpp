#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s = to_string(n);
    long long count = 0;
    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
       
    }
    if (count == 4 || count ==7)
    {
       cout << "YES" << endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
