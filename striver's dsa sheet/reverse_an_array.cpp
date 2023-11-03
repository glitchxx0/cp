#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    vector<int> a;
    if(n==0) return a;
    a=reverseArray(n-1,nums);
    a.insert(a.begin(),nums[n-1]);
    return a;

}
int main(){
    int n;
    vector<int> nums;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    for(auto v:reverseArray(n,nums)){
        cout<<v<<" ";

    }
}