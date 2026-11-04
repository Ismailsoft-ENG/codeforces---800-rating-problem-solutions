#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int N;
    cin >> N;
    int count = 0;
    if (N < 5)
    {
        cout << N << endl;
    }
    else
    {

        
        
            int num = N /5;
            if(num == 1)
            {
                int sub = N -5;
                cout<<sub+num<<endl;

            }
            
        
    }

    return 0;
}
