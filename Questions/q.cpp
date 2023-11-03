#include<bits/stdc++.h>
using namespace std;

int longest_common_alpha_set(vector<string>& strings) {
    unordered_map<char, int> charCounts;

    for (const string& s : strings) {
        unordered_map<char, int> tempCounts;
        for (char c : s) {
            tempCounts[c]++;
        }
        for (const auto& entry : tempCounts) {
            charCounts[entry.first] = min(charCounts[entry.first], entry.second);
        }
    }

    int commonLength = INT_MAX;
    for (const auto& entry : charCounts) {
        commonLength = min(commonLength, entry.second);
    }

    return commonLength;
}

int main() {
    vector<string> strings = {"abc", "bc"};
    int result = longest_common_alpha_set(strings);
    cout << "The length of the longest common string is: " << result << endl;

    return 0;
}
