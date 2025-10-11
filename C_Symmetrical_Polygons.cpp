#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;

        vector<int> odd;

        for (auto i : mp)
        {
            if (i.second % 2 == 0)
            {
                ans += i.second * i.first;
            }

            else
            {
                ans += (i.second - 1) * i.first;
                odd.push_back(i.first);
            }
        }

        // No Polygon

        if (odd.size() == n)
        {
            cout << 0 << endl;
            continue;
        }

        // One odd
        int m = odd.size();

        int maxi = ans;

        for (int i = 0; i < odd.size(); i++)
        {
            if (odd[i] < ans)
            {
                maxi = max(maxi, ans + odd[i]);
            }
        }

        //Two odd
        for (int i = 1; i < odd.size(); i++)
        {
            if (odd[i]-odd[i-1] < ans)
            {
                maxi = max(maxi, ans + odd[i] + odd[i - 1]);
            }
        }

        if (maxi == ans && odd.size() == n - 2)
        {
            cout << 0 << endl;
            continue;
        }

        cout << maxi << endl;
    }
}