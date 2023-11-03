#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> v;
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        // for(auto it:v){
        //     cout<<it<<endl;
        // }
        int x=0;
        for(int i=0;i<n;i+=2){
            x=x+abs(v[i+2]-v[i]);
        }
        int y=0;
        for(int i=1;i<n;i+=2){
            y=y+abs(v[i+2]-v[i]);
        }
        cout<<x+y<<endl;
        multimap<int,int> m;
        for(int i=0;i<n/2;i++){
            m.insert({v[2*i],v[2*i+1]});
        }
        for(auto value:m){
            cout<<value.first<<" "<<value.second<<endl;
        }
        
    }
}