#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v;
        for(long long int i=0;i<n;i++){
            long long int x;
            cin>>x;
            v.push_back(x);
        }
        vector<vector<long long int>> y;
        vector<long long int> y2;
        int temp=0;
        sort(v.begin(),v.end());
        for(long long int i=0;i<n-2;i++){
            if((v[i+1]-v[i])>(v[i+2]-v[i+1])){
                y[temp].push_back(v[i]);
                y[temp].push_back(v[i+1]);
            }
            else{
                temp++;
                y[temp].push_back(v[i+1]);
                y[temp].push_back(v[i+2]);
            }
        }
        

    }
}