class Solution {
public:
    double myPow(double x, int n) {
        if (n==0) return 1; //Base case: x^0 = 1
        if (n<0){
            if (n==INT_MIN){ //for e.g. this -2,147,483,648 which gave an error if i dont do like this
                n=INT_MAX; //Convert n to INT_MAX instead of directly negating it
                x=1/x;
                return x*myPow(x,n); 
            }
            else{
                x=1/x;
                n=-n;
            }
        }
        if (n%2==0){ // this is imp orelse time exceeded
            double half=myPow(x,n/2);
            return half*half;
        } else {
            return x*myPow(x,n-1); // x^n = x * x^(n-1)
        }
    }
};
