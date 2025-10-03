#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int q;
        cin >> q;

        vector<int> v(n + 1, -1);
        vector<int> bad(n + 1, 0);
        vector<int> prefix(n + 1, 0);

        vector<int> ones(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];

            if (v[i] == 1)
            {
                ones[i] = 1;
            }

            if (v[i] == v[i - 1])
            {
                bad[i] = 1;
            }
            ones[i] += ones[i - 1];
            prefix[i] = bad[i] + prefix[i - 1];
        }

        while (q--)
        {

            int l, r;
            cin >> l >> r;

            int one = ones[r] - ones[l - 1];
            int zeroes = (r - l + 1) - one;

            if (one % 3 != 0 || zeroes % 3 != 0)
            {
                cout << -1 << endl;
                continue;
            }

            if (prefix[r] == prefix[l])
            {
                cout << ((r - l + 1) / 3) + 1 << endl;
            }
            else
            {
                cout << (r - l + 1) / 3 << endl;
            }
        }
    }
}