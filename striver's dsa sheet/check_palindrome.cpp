#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string& str) {
    // Write your code here.
    string s;
    for(auto i=str.begin();i<str.end();i++){
        s.insert(s.begin(),*i);
    }
    if(s==str) return true;
    return false;
}
