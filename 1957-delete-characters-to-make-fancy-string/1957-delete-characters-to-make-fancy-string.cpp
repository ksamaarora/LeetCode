class Solution {
public:
    string makeFancyString(string s) {
        if(s.empty()) return "";
        int n=s.size();
        string result;
        int count=1;
        result+=s[0]; // add first character
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else if(s[i]!=s[i-1]){
                count=1;
            }
            if(count<3){
                result+=s[i];
            }
        }
        return result;
    }
};