class Solution {
public:
    bool check(vector<int>& nums) {
        int breaks=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){
                breaks++;
            }
        }
        if(breaks<=1) return true;
        else return false;
    }
};