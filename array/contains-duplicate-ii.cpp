class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int> lastIndex;  // store last seen index of each number
        
        for (int i = 0; i < nums.size(); i++) {
            if (lastIndex.count(nums[i])) {
                if (i - lastIndex[nums[i]] <= k) {
                    return true;
                }
            }
            lastIndex[nums[i]] = i;  // update last index
        }
        return false;  
    }
};