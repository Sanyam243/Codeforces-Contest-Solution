#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k == (n * n) - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            int count = n * n - k;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    count--;
                    if (count < 0)
                    {
                        cout << "D";
                    }
                    else if (i != 0 && count == 0)
                    {
                        cout << "U";
                    }
                    else if (j == 0)
                    {
                        cout << "R";
                    }
                    else
                    {
                        cout << "L";
                    }
                }
                cout << endl;
            }
        }
    }
}