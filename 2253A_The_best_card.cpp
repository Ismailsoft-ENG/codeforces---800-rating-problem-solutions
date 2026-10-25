<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int check = n+1;
        if(prime(check))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int check = n+1;
        if(prime(check))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
