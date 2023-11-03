#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(char a,char b){
    if(a>=65 && a<=90 && b>=65 && b<=90){
        if(a>b) return false;
        return true;
    }
    else if (a>=97 && a<=122 && b>=97 && b<=122){
        if(a>b) return false;
        return  true;
    }
    else if(a>b) return true;
    return false;
}
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end(),should_i_swap);
    cout<<s;

}