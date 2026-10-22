class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()==0){ //if no element present
            return 0;
        }
        int count=1; //as even if one element 1 leng always be there
        int longest=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==1){ //for consecutives 
                count++;
            }
            else if(nums[i+1]-nums[i]==0){ //if same elements exist together
             //do nothing
            }
            else{
                count=1; //reset the count
            }
            longest=max(longest,count); //compare d for every loop value
        }
        return longest;
    }
};