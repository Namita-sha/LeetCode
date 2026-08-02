class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int> freq;
        
        for(char ch : s) {
            freq[ch]++;
        }
        
        vector<pair<char,int>> vec(freq.begin(), freq.end());
        
        sort(vec.begin(), vec.end(), [](pair<char,int> a, pair<char,int> b){
            return a.second > b.second;
        });
        
        string result = "";
        
        for(auto it : vec) {
            result += string(it.second, it.first);
        }
        
        return result;
    }
};