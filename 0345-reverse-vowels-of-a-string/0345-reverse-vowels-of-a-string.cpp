class Solution {
public:
    string reverseVowels(string s) {
        string m;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                m+=s[i];
            }
        }

        string rev_vowel;
        for(int i=m.size()-1; i>=0; i--){
            rev_vowel+=m[i];
        }

        int j=0;
        string ans;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'|| s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=rev_vowel[j];
                ans+=s[i];
                j++;
            }
            else{
                ans+=s[i];
            }
        }

        return s;
    }
};