#include <bits/stdc++.h>
using namespace std;
long long power(int X, int N)
{
    long long result = 1;
    for (int i = 0; i < N; i++)
    {
        result = result * X;
    }
    return result;
}
void fun(int X, int N)
{
    long long sum = 0;
    for (int i = 0; i <= N; i = i + 2)
    {

        sum += power(X, i);
    }
    cout << sum - 1 << endl;
}
int main()
{
    int X, N;
    cin >> X >> N;
    fun(X, N);
    return 0;
}
