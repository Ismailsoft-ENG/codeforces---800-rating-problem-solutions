#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    int limak = a * 3;
    int bob = b * 2;
    if (limak > bob)
        cout << "1" << endl;
    else
    {
        int y_count =0;
        while (limak <= bob)
        {
            limak = limak*3;
            bob = bob*2;
            y_count++;
        }
        cout<<y_count+1<<endl;
    }

    return 0;
}
