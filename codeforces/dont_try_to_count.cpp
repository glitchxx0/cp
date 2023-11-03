#include<bits/stdc++.h>
using namespace std;
void append(string x){
    for(auto value: x){
        x.push_back(value);
    }
}

int main(){
    int t;
    while(t--){
        int m,n;
        cin>>m>>n;
        string x,s;
        cin>>x>>s;
        int y=0;
        for(int i=0;i<x.size();i++){
            if(s[y]==x[i]){
                for(auto v:s){
                    int z=0;
                    if(v!=x[z]) break;
                    z++;
                }
            }
        }



    }

}