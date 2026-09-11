class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
          int count =0;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            count+=mpp[nums[i]];
              mpp[nums[i]]++;
        }
      
        return count;
    }
};