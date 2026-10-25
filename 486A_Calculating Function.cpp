<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ans;

    if(n % 2 == 0)
    {
        ans = n / 2;
    }
    else
    {
        ans = -(n + 1) / 2;
    }

    cout << ans << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long ans;

    if(n % 2 == 0)
    {
        ans = n / 2;
    }
    else
    {
        ans = -(n + 1) / 2;
    }

    cout << ans << endl;

    return 0;
>>>>>>> 251434430cbca0a3e9d5faa486acea8b21ffcdfe
}