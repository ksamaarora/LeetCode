class Solution {
public:
    int reverse(int x) {
        int original=x;
        long long reversed=0;//used long long to handle potential overflow
        
        while(x!=0){
            int digit=x%10;
            reversed= reversed*10 + digit;
            if(reversed>INT_MAX || reversed<INT_MIN){
                return 0;
            }
            x=x/10;
        }
        return static_cast<int>(reversed); //Cast the result back to int before returning
    }
};