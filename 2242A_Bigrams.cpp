#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int c[k];
        for (int i = 0; i < k; i++)
        {
            cin >> c[i];
        }
        bool flag = false;
        int count =0;
        for (int i = 0; i < k; i++)
        {
            if (c[i] >= 3)
            {
                flag = true; 
            }
            else
            {
                if (c[i]>=2)
                {
                    count++;
                }
            }
        }
        if(flag == true )
        {
            cout<<"YES"<<endl;
        }
        else if(count>=2)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
