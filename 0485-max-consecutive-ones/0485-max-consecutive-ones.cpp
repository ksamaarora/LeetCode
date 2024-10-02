class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int max=cnt;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt>max) max=cnt;
        }
        return max;
    }
};