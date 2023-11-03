#include<bits/stdc++.h>
using namespace std;
long reverseBits(long n){
    long long ans = 0;
    for(int i=0;i<32;++i){
        ans <<= 1;
        ans += (n&1);
        n >>= 1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout<<reverseBits(n)<<endl;
    }
}