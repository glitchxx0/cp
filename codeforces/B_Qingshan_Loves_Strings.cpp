#include<bits/stdc++.h>
using namespace std;

bool is_good(string s) {
    for(int i = 0; i < s.length() - 1; i++){
        if (s[i] == s[i+1]){
            return false;
        }
    }
    return true;
}
string make_good(string s, string t){
    for(int i = 0; i <= s.length(); i++){
        string new_s = s.substr(0, i) + t + s.substr(i);
        if (is_good(new_s)) {
            return "YES";
        }
    }
    return "NO";
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        string s, t_str;
        cin >> s >> t_str;

        string result = make_good(s, t_str);
        cout << result << endl;
    }    

    return 0;
}
