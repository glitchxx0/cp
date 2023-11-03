#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> m(1007);
int main(){
    int t;
    cin>>t;
    for(int i=0;i<1007;i++){
        m[2+(7*(i-1))]=1;
    }

    while(t--){
        int n;
        cin>>n;

        int cnt=0;
        for(int i=1;i<=n;i++){
            if(m[i]==1){
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}