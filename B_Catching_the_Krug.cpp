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
        cin>>n;

        int kr,kc,dr,dc;
        cin>>kr>>kc>>dr>>dc;

        int ans =0;

      
            if(kr<dr){
                kr = 0;
                ans = dr;
            }else if(kr>dr){
                kr = n;
                ans= max((n-dr),ans);
            }
        
            
            if(kc<dc){
                kc = 0;
                ans = max(dc,ans);
            }else if(kc>dc){
                kc = n;
                ans= max((n-dc),ans);
            }
        

        cout<<ans<<endl;

    }
}