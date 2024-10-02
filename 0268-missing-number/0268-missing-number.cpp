class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1: Brute force TC:O(NxN) SC:O(1)
        int n=nums.size();
        for(int i=0; i<=n; i++){
            bool found=false;
            for(int j=0; j<n; j++){ // iterate over nums array to check if nums[j]==i somewhere or not 
                if(nums[j]==i){
                    found=true;
                    break;
                }
            }
            if(found==false){
                return i;
            }
        }
        return -1; // input is invalid
        
        // Method 2: Optimal method
    }
};