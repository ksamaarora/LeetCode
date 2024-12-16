class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        for(int i=0; i<k; i++){
            int small=INT_MAX;
            int index=0;
            for(int j=0; j<n; j++){
                if(nums[j]<small){
                    small=nums[j];
                    index=j;
                }
            }
            nums[index]=small*multiplier;
        }
        return nums;
    }
};