#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int m;
        for(int i=0;i<=n;i++){
            m=pow(2,i);
            if(m>=n){
                m=i-1;
                break;
            }
        }
        cout<<m<<endl;
        for(int i=pow(2,m)+2;i<=n;i++){
            if(v[i]<v[i-1]){
                cout<<"NO"<<endl;
            }
        }
        for(int i=4;i<pow(2,m);i++){
            if((i&(i-1))&&((i-1)&(i-2))){
                if(v[i]<v[i-1]){
                    cout<<"NO"<<endl;
                }
            }
            else cout<<"YES"<<endl;
        }
    }

}