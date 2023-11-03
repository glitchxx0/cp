#include<bits/stdc++.h>
using namespace std;
int gcd(pair<int,int> n){
    int x;
    for(int i=min(n.first,n.second);i>=1;i--){
        if(n.first%i==0 && n.second%i==0){
            x=i;
            break;
        }
    }
    return x;
}
int main(){
    pair<int,int> n;
    cin>>n.first>>n.second;
    cout<<gcd(n)<<endl;
    
}