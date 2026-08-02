class Solution {
public:

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0||k==0){ //edge case 
         return; 
        }
        k=k%n;//because rotating n times gives original value
        reverse(nums.begin(),nums.end()); // for right do full rotation first and for left do this at last
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
    
    }
};