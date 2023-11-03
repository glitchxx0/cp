#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int cnt=0;
        for(auto value:a){
            if(value==k){
                cnt++;
            }
        }
        if(cnt>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
         
    }
}