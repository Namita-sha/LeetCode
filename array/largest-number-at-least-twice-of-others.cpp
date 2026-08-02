class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal=-1,secondLar =-1,maxIndex=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxVal){
                secondLar=maxVal;
                maxVal=nums[i];
                maxIndex=i;
            }
            else if (nums[i]> secondLar){
                secondLar=nums[i];
            }
            }
            if(maxVal>=2* secondLar)
            return maxIndex;
            return -1;
        
    }
};