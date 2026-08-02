class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       unordered_map<int,int> mp;
       //do not insert element case like 3,3 and target 6 
       for(int i=0;i<n;i++){
       int required=0;
       required=target-nums[i];
      if( mp.find(required)!=mp.end()){
       return {i,mp[required]};
    }
    mp[nums[i]]=i; //put the elemnet in map index
    }
    return {-1,-1};
    }
};