class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    long long maxSum = 0;
    for (int i = 0; i <= (int)nums.size() - k; i++) {
        unordered_set<int> seen;
        long long sum = 0;
        bool valid = true;
        for (int j = i; j < i + k; j++) {
            if (seen.count(nums[j])) {
                valid = false;
                break;
            }
            seen.insert(nums[j]);
            sum += nums[j];
        }
        if (valid) {
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}
    
};