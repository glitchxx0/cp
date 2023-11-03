#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        auto it=(a.begin(),a.end());
        while(it!=a.end()){
            min_element(a.begin(),a.end());
            
        }
        

    }
}