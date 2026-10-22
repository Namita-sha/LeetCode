class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
    //adding unique values from set to array
    int j=0; //j is used to count the unique elements and track where to place each element in nums.(j or i any pointer name works no relation from above)
    for(int val:st){
        nums[j]=val;
        j++;
    }
    return j;
      }
};