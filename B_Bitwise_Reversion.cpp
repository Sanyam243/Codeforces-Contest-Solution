#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        bool flag =true;

        for(int i=0;i<=31;i++){
            int count =0;

            if(a&(1<<i)){
                count++;
            }
            if(b&(1<<i)){
                count++;
            }
            if(c&(1<<i)){
                count++;
            }

            if(count==2){
                flag =false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}