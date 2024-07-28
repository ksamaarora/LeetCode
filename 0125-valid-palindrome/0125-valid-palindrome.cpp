class Solution {
public:
    bool isPalindrome(string s) {
        // remove non-alphanumeric characters & convert to lowercase 
        string snew;
        for(char c:s){
            if(isalnum(c)){ // alnum() function to check if character is alpha numeric 
                snew+=tolower(c); // tolower() function converts to lowercase
            }
        }
        int i=0;
        int n=snew.size();
        while(i<n/2){
            if(snew[i]!=snew[n-i-1]) return false;
            i++;
        }
        return true;
    }
};