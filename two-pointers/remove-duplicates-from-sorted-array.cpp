class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int val : st){
            nums[j]=val;
            j++;
        }
        return j;
    }
};