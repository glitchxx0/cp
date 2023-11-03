#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        map<int,int> m;
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            m[temp]++;
        }
        for(auto &p:m){
            v.push_back(p.second);
        }
        if(v.size()>2){
            cout<<"No"<<endl;
        }
        else if(v.size()==2){
            int diff=abs(v[1]-v[0]);
            if(diff==0 || diff==1){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
}