#include <bits/stdc++.h>
using namespace std;
#define int long long int

int solve(vector<int> &v, int n, int l, int r, int k)
{

    int count = 0;

    map<int, int> mp;

    int i = 0;
    int j = 0;

    while (j < n)
    {

        mp[v[j]]++;

        while (i <= j && mp.size() > k)
        {
            mp[v[i]]--;
            if (mp[v[i]] == 0)
            {
                mp.erase(v[i]);
               
            }
             i++;
        }

        // j-i+1

        count += (max(0LL, min(j - i + 1, r) - l + 1));

      
        j++;
    }

    return count;
}
int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, l, r;
        cin >> n >> k >> l >> r;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cout << solve(v, n, l, r, k)-solve(v, n, l, r, k-1) <<endl;
       
    }
}