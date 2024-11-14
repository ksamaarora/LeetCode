// class Solution {
// public:
//     bool canDistribute(int x, vector<int>& quantities, int n) {
//         // Pointer to the first not fully distributed product type
//         int j = 0;
//         // Remaining quantity of the jth product type
//         int remaining = quantities[j];

//         // Loop through each store
//         for (int i = 0; i < n; i++) {
//             // Check if the remaining quantity of the jth product type
//             // can be fully distributed to the ith store
//             if (remaining <= x) {
//                 // If yes, move the pointer to the next product type
//                 j++;
//                 // Check if all products have been distributed
//                 if (j == quantities.size()) {
//                     return true;
//                 } else {
//                     remaining = quantities[j];
//                 }
//             } else {
//                 // Distribute the maximum possible quantity (x) to the ith store
//                 remaining -= x;
//             }
//         }
//         return false;
//     }
//     int minimizedMaximum(int n, vector<int>& quantities) {
//         // Initialize the boundaries of the binary search
//         int left = 0;
//         int right = *max_element(quantities.begin(), quantities.end());

//         // Perform binary search until the boundaries converge
//         while (left < right) {
//             int middle = (left + right) / 2;
//             if (canDistribute(middle, quantities, n)) {
//                 // Try for a smaller maximum
//                 right = middle;
//             } else {
//                 // Increase the minimum possible maximum
//                 left = middle + 1;
//             }
//         }
//         return left;
//     }
// };


class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();

        // Define a custom comparator for the priority queue
        // It sorts the pairs based on the ratio of their first to their second
        // element
        auto compareTypeStorePairs = [](pair<int, int>& a, pair<int, int>& b) {
            return (long long)a.first * b.second <
                   (long long)a.second * b.first;
        };

        // Helper array - useful for the efficient initialization of the
        // priority queue
        vector<pair<int, int>> typeStorePairsArray;

        // Push all product types to the array, after assigning one store to
        // each of them
        for (int i = 0; i < m; i++) {
            typeStorePairsArray.push_back({quantities[i], 1});
        }

        // Initialize the priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       decltype(compareTypeStorePairs)>
            typeStorePairs(typeStorePairsArray.begin(),
                           typeStorePairsArray.begin() + m);

        // Iterate over the remaining n - m stores.
        for (int i = 0; i < n - m; i++) {
            // Pop first element
            pair<int, int> pairWithMaxRatio = typeStorePairs.top();
            int totalQuantityOfType = pairWithMaxRatio.first;
            int storesAssignedToType = pairWithMaxRatio.second;
            typeStorePairs.pop();

            // Push same element after assigning one more store to its product
            // type
            typeStorePairs.push(
                {totalQuantityOfType, storesAssignedToType + 1});
        }

        // Pop first element
        pair<int, int> pairWithMaxRatio = typeStorePairs.top();
        int totalQuantityOfType = pairWithMaxRatio.first;
        int storesAssignedToType = pairWithMaxRatio.second;

        // Return the maximum minimum ratio
        return ceil((double)totalQuantityOfType / storesAssignedToType);
    }
};