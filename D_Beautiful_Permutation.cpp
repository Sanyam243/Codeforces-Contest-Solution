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

        cout<<2<<" "<<1<<" "<<n<<endl;
        cout.flush();
        int sum;
        cin>>sum;

        cout<<1<<" "<<1<<" "<<n<<endl;
        cout.flush();
        int sum2;
        cin>>sum2;

        int len = sum -sum2;

        int low =1;
        int high =n;

        int index = -1;

        while(low<=high){

            int mid =(low+high)/2;

            cout<<2<<" "<<1<<" "<<mid<<endl;
            cout.flush();
            int s1;
            cin>>s1;
            cout<<1<<" "<<1<<" "<<mid<<endl;
            cout.flush();
            int s2;
            cin>>s2;

            int diff =s1-s2;

            if(diff==0){
               index = mid+1;
               low =mid+1;
            }else{
                high =mid-1;
            }
        }

        cout<<"! "<<low<<" "<<low+len-1<<endl;
        cout.flush();
        


        
      
    }
}