#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,d;
        cin>>n>>x>>d;
        if(n<(x*5)){
            cout<<0<<endl;
        }
        else cout<<n/(x*5)+d<<endl;
    }
}