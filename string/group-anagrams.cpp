class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> groups;
    for (const string& s : strs) {
        // Sort characters to create a canonical key
        string key = s;
        sort(key.begin(), key.end());
        // Group strings with the same sorted key
        groups[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& pair : groups) {
        result.push_back(move(pair.second));
    }
    return result;   
    }
};