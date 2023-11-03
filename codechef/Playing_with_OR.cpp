#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int cnt=0;
        for(int i=0;i<n-k+1;i++){
            for(int j=0;j<k;j++){
                if(((v[j]|v[j+1]|v[j+2])%2)!=0){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}