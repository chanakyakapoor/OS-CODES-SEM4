#include <bits/stdc++.h>
using namespace std;

long f(int *&d, int i, int tar, vector<vector<long>> &dp)
{
    // base case
    if (tar == 0)
    {
        return 1;
    }
    if (i == 0)
    {
        return (tar % d[0] == 0);
    }
    // actual recursion

    if (dp[i][tar] != -1)
        return dp[i][tar];
    // take
    long t = 0;
    if (d[i] <= tar)
    {
        t = f(d, i, tar - d[i], dp);
    }
    // not take
    long nt = f(d, i - 1, tar, dp);

    return dp[i][tar] = nt + t;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    // Write your code here
    vector<vector<long>> dp(n, vector<long>(value + 1, -1));
    return f(denominations, n - 1, value, dp);
}

int main()
{

    int denominations[] = {1, 2, 3};

    long r = countWaysToMakeChange(denominations, 3, 4);

    cout << r;

    return 0;
}