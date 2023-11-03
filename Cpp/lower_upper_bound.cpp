#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // sort(a,a+n);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // // int *ptr=lower_bound(a,a+n,26);
    // // if(ptr==(a+n)){
    // //     cout<<"Not Found";
    // //     return 0;
    // // }
    // // cout<<*ptr<<endl;
    // int *ptr=upper_bound(a,a+n,5);
    // if(ptr==(a+n)){
    //     cout<<"Not Found";
    //     return 0;
    // }
    // cout<<*ptr<<endl;

    int n;
    cin>>n;
    set<int> s;
    map<int,int> m;
    for(int i=0;i<(int)(1e6);i++){
        // int x;
        // cin>>x;
        s.insert(rand());
    }
    for(int i=0;i<(int)(1e5);++i){
        //auto it=lower_bound(s.begin(),s.end(),rand()); //dont pass like this in sets or maps
        auto it=s.lower_bound(rand());
    }
    // auto it=lower_bound(s.begin(),s.end(),5);
    // cout<<(*it)<<endl;
}