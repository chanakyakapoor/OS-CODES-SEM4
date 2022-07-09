#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> vect;

        for (int i = 0; i < n; i++)
        {
            vect.push_back(make_pair(a[i], b[i]));
        }

        sort(vect.begin(), vect.end());

        for (int i = 0; i < n; i++)
        {
            if (vect[i].first <= k)
            {
                k = k + vect[i].second;
            }
            else break;
        }
        cout << k << "\n";
    }
}