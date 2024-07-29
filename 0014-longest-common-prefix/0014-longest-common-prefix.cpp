class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string prefix = strs[0]; // start with the first string as the prefix
        
        for (int i = 1; i < strs.size(); ++i) {
            while (strs[i].find(prefix) != 0) { // check if the current prefix is at the start of strs[i]
                prefix = prefix.substr(0, prefix.length() - 1); // reduce the prefix by one character
                if (prefix.empty()) return ""; // if prefix becomes empty, there's no common prefix
            }
        }
        
        return prefix;
    }
};