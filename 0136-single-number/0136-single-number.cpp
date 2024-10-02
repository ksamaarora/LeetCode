class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // Method 1: Brute force solution
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     int cnt=0;
        //     for(int j=0; j<n; j++){
        //         if(nums[j]==nums[i]){
        //             cnt++;
        //         }
        //     }
        //     if(cnt==1) return nums[i];
        // }
        // return -1;
        
        // Method 2: Better solution using hashing
        map<int, int> mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1) return it.first;
        }
        return -1;
    }
};