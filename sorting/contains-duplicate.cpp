class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int n=nums.size();
    unordered_set<int> st;
    for(int i=0;i<n;i++){
   if(st.count(nums[i])){//is in set
            return true;
        }
        st.insert(nums[i]);//insert in set   
        }
    return false;
    }
};