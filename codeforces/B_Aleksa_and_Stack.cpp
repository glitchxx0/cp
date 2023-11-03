#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        a[0]=1;
        a[1]=2;
        for(int i=2;i<n;i++){
            a[i]=((a[i-1]+a[i-2])/3)*10+1;
        }
        for(auto value:a){
            cout<<value<<" ";
        }
        cout<<endl;
        auto it=(a.begin(),a.end());
        while(it!=a.end()){
            
        }
    }
}