class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }

private:
    void backtrack(vector<int>& nums, int index, vector<vector<int>>& result) {
        // All positions filled, add a copy of the current arrangement
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }
        // Try each available element (from index onward) at the current position
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            backtrack(nums, index + 1, result);
            swap(nums[index], nums[i]); // Swap back to restore original order
        }
    }
};