#include<bits/stdc++.h>
using namespace std;
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> a;
    if(x<1) return a;
    a=printNos(x-1);
    a.push_back(x);
    return a;
    
}
int main(){
    int n;
    cin>>n;
    for(auto value:printNos(n)){
        cout<<value<<" ";
    }
}