#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> Set;
        int maxLength = 0;
        int start = 0;
        int end = 0;
        while (start < s.size()) {
            auto it = Set.find(s[start]);
            if (it ==  Set.end()) {
                if (start-end+1 > maxLength) maxLength = start-end+1;
                Set.insert(s[start]);
                start++;
            } else {
                Set.erase(s[end]);
                end++;
            }
        }
        return maxLength;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Length of longest substring without repeating characters: " << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}
