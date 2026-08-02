class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[mid+1])      // is slope right side or left side
            r= mid;
            else
                l=mid+1;
            }
          
       return l;  //as l and r are equal so can return any
    }
};