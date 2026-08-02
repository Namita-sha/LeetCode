class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int cnt=0;
        //step 1: run a loop
        for(int i=0;i<n;i++){
            //step 2: check for 1 if present increase count
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
           // step 3: find max
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};