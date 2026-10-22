class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return backtrack(nums, target, 0, 0);
    }

private:
    int backtrack(vector<int>& nums, int target, int index, int currentSum) {
        // Base case: used all numbers
        if (index == (int)nums.size()) {
            return currentSum == target ? 1 : 0;
        }
        // Try adding and subtracting the current number
        int add = backtrack(nums, target, index + 1, currentSum + nums[index]);
        int subtract = backtrack(nums, target, index + 1, currentSum - nums[index]);
        return add + subtract;
    }
};