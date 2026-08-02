class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        set<int>s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
        
        vector<int> result;
        for(int x:s1){
            if(s2.count(x)){
                result.push_back(x);
            }
        }
        return result;
    }
};