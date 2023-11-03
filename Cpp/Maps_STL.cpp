#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int> m;
    while(t--){
        int op,mk;
        string s; 
        cin>>op;
        if(op==1){
            cin>>s>>mk;
            m[s]+=mk;
        }
        if(op==2){
            cin>>s;
            m[s]=0;
        }
        if(op==3){
            cin>>s;
            cout<<m[s]<<endl;
        }
    }
}