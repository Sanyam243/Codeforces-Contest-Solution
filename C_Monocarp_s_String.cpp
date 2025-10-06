#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v(n+1, 0);
        vector<int> prefix(n+1,0);
        
        for (int i = 1; i <= n; i++)
        {
            if (s[i-1] == 'a')
            {
                v[i] = 1;
            }
            else
            {
                v[i] = -1;
            }

            prefix[i]=prefix[i-1]+v[i];
        }

        vector<int> suffix(n+2,0);
        map<int,set<int>> mp;
       
        for(int i=n;i>=1;i--){
            suffix[i]=suffix[i+1]+v[i];

            mp[suffix[i]].insert(i);
        }
        int mini =1e9;
        for(int i=0;i<=n;i++){
            int target = -prefix[i];


            if(i!=0 &&target==0){
                mini =min(mini,n-i);
            }
           
           // cout<<prefix[i]<<" ";
            if(mp.find(target)!=mp.end()){
                auto it = mp[target].upper_bound(i);
                if(it!=mp[target].end())
                mini= min(mini,*it-i-1);
            }
           // cout<<maxi<<endl;
        }
        if(mini!=1e9)
        cout<<mini<<endl;
        else
        cout<<-1<<endl;





       
    }
}
