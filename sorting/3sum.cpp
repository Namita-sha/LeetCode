class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> answer;
        if (n < 3) {
            return answer;
        }

        sort(nums.begin(), nums.end());

        for (int fixed = 0; fixed < n - 2; fixed++) {
         
            if (fixed > 0 && nums[fixed] == nums[fixed - 1]) {
                continue;
            }
            int left = fixed + 1;
            int right = n - 1;

            while (left < right) {
                long long sum =
                    (long long) nums[fixed] +
                    nums[left] +
                    nums[right];
                if (sum < 0) {
                    left++;
                }
                else if (sum > 0) {
                    right--;
                }
                else {
                    answer.push_back({
                        nums[fixed],
                        nums[left],
                        nums[right]
                    });

                    left++;
                    right--;

                    while (left < right &&
                           nums[left] == nums[left - 1]) {
                        left++;
                    }

                    while (left < right &&
                           nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }

        return answer;
    }
};

