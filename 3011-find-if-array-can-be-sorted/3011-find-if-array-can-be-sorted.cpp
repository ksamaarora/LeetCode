// Method 1: Bubble Sort
// TC:O(N^2) SC:O(N)
// class Solution {
// public:
//     bool canSortArray(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> values = nums;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n - i - 1; j++) {
//                 if (values[j] <= values[j + 1]) {
//                     continue;
//                 } else {
//                     if (__builtin_popcount(values[j]) ==
//                         __builtin_popcount(values[j + 1])) {
//                         swap(values[j], values[j + 1]);
//                     } else {
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };


// Method 2: Sorting Segments
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        // Number of set bits of the elements in the current segment
        int numOfSetBits = __builtin_popcount(nums[0]);
        int maxOfSegment = nums[0];
        int minOfSegment = nums[0];

        // Initialize max of the previous segment to the smallest possible
        // integer
        int maxOfPrevSegment = INT_MIN;

        for (int i = 1; i < nums.size(); i++) {
            if (__builtin_popcount(nums[i]) == numOfSetBits) {
                // Element belongs to the same segment
                // Update min and max values of the segment
                maxOfSegment = max(maxOfSegment, nums[i]);
                minOfSegment = min(minOfSegment, nums[i]);
            } else {  // Element belongs to a new segment
                // Check if the segments are arranged properly
                if (minOfSegment < maxOfPrevSegment) {
                    return false;
                }

                // Update the previous segment's max
                maxOfPrevSegment = maxOfSegment;

                // Start a new segment with the current element
                maxOfSegment = nums[i];
                minOfSegment = nums[i];
                numOfSetBits = __builtin_popcount(nums[i]);
            }
        }
        // Final check for proper segment arrangement
        if (minOfSegment < maxOfPrevSegment) {
            return false;
        }
        return true;
    }
};