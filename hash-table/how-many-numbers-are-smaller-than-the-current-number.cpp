class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int freq[101] = {0}; 
        for (int x : nums) freq[x]++;
        for (int i = 1; i <= 100; i++) freq[i] += freq[i-1];
        vector<int> result;
        for (int x : nums) {
            result.push_back(x == 0 ? 0 : freq[x-1]);
        }
        return result;
    }
};