class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        if (threshold==nums.size()) return high;
        while(low<=high){
            int mid= low+(high-low)/2;
            int s=0;
            for(int i=0;i<nums.size();i++){
                 s += (nums[i] + mid - 1) / mid;
               
            }
            if (s>threshold){
                low=mid+1;
            }else{
                high=mid-1;
            }

        } return low;
        
    }
};