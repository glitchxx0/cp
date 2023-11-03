#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
    if(s.size()==0 || s.top()<=temp){
        s.push(temp);
        return;
    }
    int value=s.top();
    s.pop();
    insert(s,temp);
    s.push(temp);
}

void sort(stack<int> &s){
    if(s.size()==1){
        return;
    }
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return;
}
int main(){
    stack<int> s;
    int x;
    while(cin>>x){
        s.push(x);
    }
    sort(s);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

}