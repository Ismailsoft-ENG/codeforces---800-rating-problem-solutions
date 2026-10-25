#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="YES"||s=="Yes"||s=="yES"||s=="yes"||s=="YEs"||s=="YeS"||s=="yEs"||s=="yeS")
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

 return 0;
}
