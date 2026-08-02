class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longestStreak = 1;
        int currentStreak = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                // Consecutive, extend the streak
                currentStreak++;
            } else if (nums[i] != nums[i - 1]) {
                // Not a duplicate, streak breaks
                currentStreak = 1;
            }
            // If nums[i] == nums[i-1], it's a duplicate — skip it

            longestStreak = max(longestStreak, currentStreak);
        }

        return longestStreak;
    }
};