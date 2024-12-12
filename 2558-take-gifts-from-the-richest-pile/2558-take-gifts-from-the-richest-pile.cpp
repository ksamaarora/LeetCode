// Brute force solution 
// TC: O(k)xO(n) + O(n) for printing sum
// SC: O(1)
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        for(int i=0; i<k; i++){
            int max=0;
            int index;
            for(int j=0; j<n; j++){
                if(gifts[j]>max){
                    max=gifts[j];
                    index=j;
                }
            }
            gifts[index]=sqrt(gifts[index]);
        }
        long long sum=0;
        for(int i=0; i<n; i++){
            sum=sum+gifts[i];
        }
        return sum;
    }
};