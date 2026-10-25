#include <bits/stdc++.h>
using namespace std;

bool fun(int N)
{
    return N % 2 != 0;
}

bool palindrome(int x)
{
    vector<int> binary;

    while (x > 0)
    {
        binary.push_back(x % 2);
        x /= 2;
    }

    vector<int> rev = binary;

    reverse(rev.begin(), rev.end());

    return binary == rev;
}

int main()
{
    int N;
    cin >> N;

    if (fun(N) && palindrome(N))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}