class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> list1;
        vector<int> list2;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>0) list1.push_back(nums[i]);
            else list2.push_back(nums[i]);
        }
        int index1=0; int index2=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                nums[i]=list1[index1++];
            }
            else{
                nums[i]=list2[index2++];
            }
        }
        return nums;
    }
};