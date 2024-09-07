class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int xcopy=x;
        long long revnum=0;
        while(xcopy!=0){
            int lastdigit=xcopy%10;
            revnum=revnum*10 + lastdigit;
            xcopy=xcopy/10;
        }
        if(revnum==x){return true;}
        else{ return false;}
    }
};