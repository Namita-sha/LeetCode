class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int num : nums){
            freq[num]++;
                    }
                    int maxFreq=0;
                    for(auto it: freq){
                        maxFreq =max(maxFreq, it.second);

                    }
        int totalCount = 0;
for (auto it : freq) {
    if (it.second == maxFreq) {
        totalCount += it.second;  // Add occurrences
    }
}
return totalCount;
    }
};