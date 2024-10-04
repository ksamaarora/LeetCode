class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Method 1: Brute force soln TC:O(N^2) SC:O(1)
        int n=nums.size();
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            if(cnt>(n/2)){
                return nums[i];
            }
        }
        return -1;
        
        // Method 2: Better soln: Using map 
        // TC:O(N log N) + O(N) and SC:O(N) in worst case
        // map<int, int> mpp; // element,count
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     if(mpp.find(nums[i])!=mpp.end()){
        //         mpp[nums[i]]++;
        //     }
        //     else{ mpp[nums[i]]=1; }
        // }
        // for(auto &it:mpp){
        //     if(it.second>(n/2)){
        //         return it.first;
        //     }
        // }
        // return -1;
    }
};