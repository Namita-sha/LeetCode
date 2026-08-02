class Solution {
public:
    int findLucky(vector<int>& arr) {
    unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        int result = -1;

        // Check for lucky integers
        for (auto& pair : freq) {
            if (pair.first == pair.second) {
                result = max(result, pair.first);
            }
        }

        return result;
    }
};