class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int maxVal = (1 << maximumBit) - 1; // 2^maximumBit - 1
        int currentXor = 0;

        // Calculate the initial XOR for the entire array
        for (int num : nums) {
            currentXor ^= num;
        }

        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            // Calculate the maximum k for the current state
            answer[i] = currentXor ^ maxVal;

            // Remove the last element of the current nums from the XOR
            currentXor ^= nums[n - 1 - i];
        }

        return answer;
    }
};
