class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int expected = 1;

        for (int i = 0; i < (int)nums.size(); i++) {
            // Skip negatives, zeros, and duplicates
            if (nums[i] <= 0 || (i > 0 && nums[i] == nums[i - 1])) {
                continue;
            }
            // If current number matches what we expect, move to next
            if (nums[i] == expected) {
                expected++;
            } else {
                // Gap found
                break;
            }
        }

        return expected;
    }
};