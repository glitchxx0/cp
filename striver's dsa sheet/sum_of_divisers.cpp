#include<bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n){
    int sum=0;
    if(n==1){
        return 1;
    }
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(n/i!=i){
                sum+=n/i;
            }
        }
    }
    return sum+sumOfAllDivisors(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfAllDivisors(n);
}