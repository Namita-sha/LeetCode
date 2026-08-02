class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
      int l=0,h=n-1;
      while(l<=h){
        int mid=l+(h-l)/2;
        if(nums[mid]==target){
            return mid;
        }
        // check either right half or lft half is sorted and eliminate theother one
        //left half
       if(nums[l]<=nums[mid]){
    if(nums[l]<=target && nums[mid]>=target){
        h=mid-1;  //eliminate the right half
    }
        else {
        l=mid+1;
       }
       }
       else{
       if(nums[mid]<=target && nums[h]>=target){
        l=mid+1;  //eliminate the left half
       }
        else
        h=mid-1;
      }
      }
        return -1;
    }
};