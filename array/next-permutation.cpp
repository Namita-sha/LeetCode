class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     /*
     1. longest prefix match with break point
     2. find > 1 but,the smallest one(so to stay close and choose just next)
     3. try to place remining in sorted order
     */
      int idx=-1;
      int n=nums.size();
      for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){ //the break point
            idx=i;
            break;
        }
      }
      if(idx==-1){ //edge case if last elemnet given so fisrt will be gotten by reversing
        reverse(nums.begin(),nums.end());
        return;
      }

      for(int i=n-1;i>idx;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
            break;
        }
      }
      reverse(nums.begin()+idx+1,nums.end());//from break point to end
    }
};