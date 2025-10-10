#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int> v(n);
        
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>v[i];
            s.insert(v[i]);
        }

        cout<<s.size()<<endl;



    }
}