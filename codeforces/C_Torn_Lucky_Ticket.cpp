#include<bits/stdc++.h>
using namespace std;
vector<string> v;
bool is_lucky(string &s){
    if(s.length()%2!=0){
        return false;
    }
    int x=0,y=0;
    for(int i=0;i<s.length()/2;i++){
        x+=s[i]-'0';
    }
    for(int i=s.length()/2;i<s.length();i++){
        y+=s[i]-'0';
    }
    if(x==y){
        return true;
    }
    return false;
}

int main(){
    long long n;
    cin>>n;
    long long cnt=0;
    for(long long i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n;j++){
            string s;
            s=v[i]+v[j];
            if(is_lucky(s)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}