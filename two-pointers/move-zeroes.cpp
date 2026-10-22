class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int> temp(n,0);
        for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp[j]=nums[i];
            j++;
        }
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i]; // if j then it will copy the all 0 in whole array as last time j becomes 3 holding last non zero so we need i here
        }
       }
};