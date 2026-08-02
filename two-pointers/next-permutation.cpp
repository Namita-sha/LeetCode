class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size();
        int i = n - 2;

        // 1. Find the first index from right where nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            // 2. Find the element just larger than nums[i] from the right side
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            std::swap(nums[i], nums[j]);
        }

        // 3. Reverse nums[i+1 ... n-1] to get the smallest order
        int left = i + 1, right = n - 1;
        while (left < right) {
            std::swap(nums[left], nums[right]);
            left++;
            right--;
        } 
    }
};