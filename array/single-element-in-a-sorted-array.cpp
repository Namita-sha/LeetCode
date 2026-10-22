class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int xorVal=0;
        for(int i=0;i<n;i++){
            xorVal^=nums[i];
        }
        return xorVal;
    }
};
