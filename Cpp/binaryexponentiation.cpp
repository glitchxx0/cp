#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    if (b % 2)
                        return binpow(a, b / 2) * binpow(a, b / 2) * a;
    else
        return binpow(a, b / 2) * binpow(a, b / 2);
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<< binpow(a,b);
}