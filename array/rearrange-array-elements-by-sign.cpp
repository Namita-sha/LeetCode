class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
           //step 1 ttake a vector resultant array
           vector<int> ans(n,0);
           int pos_idx=0;
           int neg_idx=1;
           //step 2:run a loop place positive at pos_idx and negative at neg_idx each time increase idx by 2;
          for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[pos_idx]=nums[i];
                pos_idx+=2;
            }
            else{
                ans[neg_idx]=nums[i];
                neg_idx+=2;
            }
          }
          return ans;
            }
};