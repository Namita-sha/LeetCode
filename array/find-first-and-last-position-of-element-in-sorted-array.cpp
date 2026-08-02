class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=-1,last=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
            first=i;
            break;//else it will keep changing first everytime loop runs and it find the element
            }
        }
        //edge case
        if(first==-1){
            return {-1,-1};
        }
            for(int j=n-1;j>=0;j--){
            if(nums[j]==target){
                last=j;
                break;
            }
            }
        return {first,last};
    }
};