#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }
    // int min = *min_element(v.begin()+3,v.end());
    // cout<<min<<endl;
    // int max = *max_element(v.begin(),v.end());
    // cout<<max<<endl;
    
    // int sum=accumulate(v.begin(),v.end(),0);
    // cout<<sum<<endl;

    // int ct=count(v.begin()+1,v.end(),6);
    // cout<<ct<<endl;

    // int element=*find(v.begin(),v.end(),2);
    // auto it=find(v.begin(),v.end(),2);
    // if(it!=v.end()){
    //     cout<<*it<<endl;
    // }
    // else cout<<"Element not Found"<<endl;

    // reverse(v.begin()+2,v.end());
    // for(auto val:v){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    auto sum=[](int x, int y ){return x+y;};
    // cout<<sum(2,3);

    vector<int> v={-2,-3,-5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});
    






}