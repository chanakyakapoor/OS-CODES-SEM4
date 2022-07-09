#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int n = 4;
int f(vector<int> &v, int idx)
{
    // if (idx >= n)
    //     return;
    // if (idx == n - 1)
    // {
    //     if (sum < ans)
    //     {
    //         ans = sum;
    //     }
    //     return;
    // }
    if (idx == 0)
        return 0;
    int l, r = INT_MAX;
    l = f(v, idx - 1) + abs(v[idx - 1] - v[idx]);
    if (idx > 1)
        r = f(v, idx - 2) + abs(v[idx - 2] - v[idx]);

    return min(l, r);
}
int main()
{
    vector<int> v = {10, 20, 30, 10};
    int ans = f(v, 3);

    cout << ans;
}