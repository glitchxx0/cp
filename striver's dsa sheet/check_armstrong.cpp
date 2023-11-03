#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
    int temp = n, rem,sum=0,len=to_string(n).length();
    while(temp>0){
        rem=temp%10;
        sum+=pow(rem,len);
        temp=temp/10;
    }
    if(n==sum){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<checkArmstrong(n)<<endl;

}