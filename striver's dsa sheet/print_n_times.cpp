#include<bits/stdc++.h>
using namespace std ;
void recursion(int n, vector<string> &ans)
{
	if(n == 0)
	    return;
	ans.push_back("Coding Ninjas");
	recursion(n-1, ans);
}

vector<string> printNTimes(int n) {
	vector<string> ans;
	recursion(n,ans);

	return ans;
}
int main(){
    int n;
    cin>>n;
    for(auto v:printNTimes(n)){
        cout<<v<<" ";
    }

}