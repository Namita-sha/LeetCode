class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});  // start with empty subset

        for (int num : nums) {
            // Snapshot current size to avoid processing newly added subsets
            int size = result.size();
            for (int i = 0; i < size; i++) {
                // Copy existing subset and add current number
                vector<int> newSubset = result[i];
                newSubset.push_back(num);
                result.push_back(newSubset);
            }
        }

        return result;
    }
};