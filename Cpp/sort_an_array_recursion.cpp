#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp){
    if(v.size()==0||v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int value= v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(value);
    return;
}

void sort(vector<int> &v){
    if(v.size()==1){
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
}

int main(){
    vector<int> v;
    int x;
    while(cin>>x){
        v.push_back(x);
    }
    sort(v);
    for(auto &value:v){
        cout<<value<<" ";
    }
}