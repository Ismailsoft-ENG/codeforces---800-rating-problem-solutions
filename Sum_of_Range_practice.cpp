#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    long long low = min(A, B);
    long long high = max(A, B);
    long long n = high - low + 1;
    long long sum = n * (low + high) / 2;
    long long firstEven = low;
    long long lastEven = high;

    if (firstEven % 2 != 0)
        firstEven++;

    if (lastEven % 2 != 0)
        lastEven--;

    long long sum_even = 0;

    if (firstEven <= lastEven)
    {
        long long nEven = (lastEven - firstEven) / 2 + 1;
        sum_even = nEven * (firstEven + lastEven) / 2;
    }
    long long firstOdd = low;
    long long lastOdd = high;
    if (firstOdd % 2 == 0)
        firstOdd++;

    if (lastOdd % 2 == 0)
        lastOdd--;

    long long sum_odd = 0;

    if (firstOdd <= lastOdd)
    {
        long long nOdd = (lastOdd - firstOdd) / 2 + 1;
        sum_odd = nOdd * (firstOdd + lastOdd) / 2;
    }

    cout << sum << endl;
    cout << sum_even << endl;
    cout << sum_odd << endl;

    return 0;
}