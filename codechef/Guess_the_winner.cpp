#include<bits/stdc++.h>
using namespace std;
void primeFactors(int n,set<int> s)
{  
    while (n % 2 == 0)  
    {  
        s.insert(2);
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            s.insert(i);  
            n = n/i;  
        }  
    }  
    if (n > 2)  s.insert(n);  
}  
void odd_pf(set<int> s,int x){
    set<int>::reverse_iterator rit;
    for(rit=s.rbegin();rit!=s.rend();rit++){
        if(*rit%2!=0){
            x=*rit;
        }

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        set<int> s;
        primeFactors(n,s);
        for(auto it:s){
            cout<<it<<endl;
        }

    }
}