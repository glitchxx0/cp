#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97 && s[i]<=122){
            m[s[i]]++;
        }
        else if(s[i]>=65 && s[i]<=90 && m[tolower(s[i])]>0){
            m[tolower(s[i])]--;
        }
    }
    int cnt=0;
    for(auto &v:m){
        if(v.second>0){
            cnt+=v.second;
        }
    }
    cout<<cnt<<endl;

}