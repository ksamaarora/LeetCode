// Method 2 (Reversing whole number and comparing) - EASIER Method
class Solution {
public:
    bool isPalindrome(int x){
        if(x<0) return false;
        if(x==0) return true;
        int rev_num=0;
        int duplicate=x;
        while(x!=0){
            int last_digit=x%10;
            
            // Overflow Check orelse rev_num multiplying by 10 and then adding last_digit might exceed the range on int (IMP)
            if(rev_num>(INT_MAX-last_digit)/10) return false;
            rev_num = rev_num*10 + last_digit;
            x=x/10;
        }
        if(rev_num==duplicate){
            return true;
        }
        else{ return false;}
    }
};

// Method 1 (Checking each digit)
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0) return false;
//         if(x==0) return true;
//         int n = (int)log10(x)+1;
//         int i=0;
//         while(i<=n/2){
//             int left = (x / (int)pow(10, n - i - 1)) % 10;
//             int right = (x / (int)pow(10, i)) % 10;
//             if(left!=right) return false;
//             i++;
//         }
//         return true;
//     }
// };