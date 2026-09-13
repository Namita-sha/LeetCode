class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>freq;
        for(auto& word: words){
            freq[word]++;
        }
       vector<string> candidates;
        for (auto& [word, count] : freq) {
            candidates.push_back(word);
        }
        sort(candidates.begin(), candidates.end(), [&freq](const string& a, const string& b) {
            if (freq[a] == freq[b]) return a < b;
            return freq[a] > freq[b];
        });
        candidates.resize(k);
        return candidates;
    }
};