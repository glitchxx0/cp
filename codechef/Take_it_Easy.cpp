#include<bits/stdc++.h>
using namespace std;
void func(long long n,vector<long long> v){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    long long total_candies=accumulate(v.begin(),v.end(),0);
    if(total_candies%n!=0){
        cout<<"NO"<<endl;
        return;
    }
    long long target_candies=total_candies/n;
    for(auto value:v){
        long long diff=abs(target_candies-value);
        if(diff%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v;
        func(n,v);

    }
}