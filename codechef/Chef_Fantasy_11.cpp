#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<fact(x)/fact(x-2)<<endl;
    }
}