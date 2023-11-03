#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unordered_set<long long> s;
        int n, m; 
        cin >> n >> m;
        for(int i=0; i<n; ++i){
            long long x; cin >> x;
            s.insert(x);
        }
        for(int i=0; i<m; ++i){
            long long x; cin >> x;
            auto it = s.find(x);
            if(it != s.end())cout << "YES" << endl;
            else{
                cout << "NO" << endl;
                s.insert(x);
            }
        }
    }
}