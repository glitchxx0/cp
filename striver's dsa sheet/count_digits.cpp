#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int temp=n;
    int x;
    int cnt=0;
    while(temp!=0){
        x=temp%10;
        if(x!=0){
            cnt+=(n%x==0);
        }
        temp=temp/10;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
}