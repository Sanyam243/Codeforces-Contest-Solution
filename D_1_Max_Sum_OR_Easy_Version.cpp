#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << r *1LL* (r + 1) << endl;

        vector<int> ans(r + 1, -1);

        for (int i = r; i >= 0; i--)
        {
            int x = i;

            if (ans[i] != -1)
            {
                continue;
            }

            int val = x;
            int k = 0;
            while (val > 0)
            {
                k++;
                val = val >> 1;
            }

            if (ans[x] == -1)
                ans[x] = (1 << k) - 1 - x;

            if (ans[(1 << k) - 1 - x] == -1)
                ans[(1 << k) - 1 - x] = x;
        }

        for (int i : ans)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}