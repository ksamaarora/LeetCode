class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // Brute Force Method
        // vector<int> ans;
        // int n1=nums1.size();
        // int n2=nums2.size();
        // vector<int> vis(n2,0); // Initialization imp
        // for(int i=0; i<n1; i++){
        //     for(int j=0; j<n2; j++){
        //         if(nums1[i]==nums2[j] && vis[j]==0){
        //             ans.push_back(nums1[i]);
        //             vis[j]=1;
        //             int val=nums1[i];
        //             for(int k=0; k<n2; k++){
        //                 if(nums2[k]==val){
        //                     vis[k]=1;
        //                 }
        //             }
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        // Better Method 
        set<int> st;
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> vis(n2,0); // Initialization imp
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(nums1[i]==nums2[j] && vis[j]==0){
                    st.insert(nums1[i]);
                    vis[j]=1;
                    break;
                }
            }
        }
        // convert set to vector to return
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};