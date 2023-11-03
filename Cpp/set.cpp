#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
}
int main(){
    // set<string> s;
    // s.insert("abc");
    // s.insert("zsdf");
    // s.insert("bcd");
    // print(s);
    unordered_set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"no\n";
        }else cout<<"yes\n";
    }
}