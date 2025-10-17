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
        int k;

        cin >> n >> k;

        vector<int> v(n);

        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        

        int start = -1;
        for (int i = 1; i <= n; i++)
        {
            if (s.find(i) == s.end())
            {
                start = i;
                break;
            }
        }

        if (start == -1)
        {
            for (int i = 0; i < k; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << start << " ";
            k--;
            int last = start;
            int secondLast = v.back();

            while (k > 0)
            {
                set<int> s;
                for (int i = 1; i <= 3; i++)
                {
                    s.insert(i);
                }
                if (s.find(last) != s.end())
                {
                    s.erase(last);
                }
                if (s.find(secondLast) != s.end())
                {
                    s.erase(secondLast);
                }

                cout << *s.begin() << " ";
                secondLast = last;
                last = *s.begin();
                k--;
            }
            cout<<endl;
        }
    }
}