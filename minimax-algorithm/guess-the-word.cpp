class Solution {
public:
    void findSecretWord(vector<string>& words, Master& master) {
        vector<string> candidates(words.begin(), words.end());

        while (!candidates.empty()) {
            // Minimax: pick word whose worst-case group is smallest
            string bestGuess = candidates[0];
            int bestMaxGroup = candidates.size();

            for (const string& word : candidates) {
                int groups[7] = {};
                for (const string& other : candidates) {
                    groups[match(word, other)]++;
                }
                int maxGroup = *max_element(groups, groups + 7);
                if (maxGroup < bestMaxGroup) {
                    bestMaxGroup = maxGroup;
                    bestGuess = word;
                }
            }

            int matches = master.guess(bestGuess);
            if (matches == 6) return;

            vector<string> filtered;
            for (const string& word : candidates) {
                if (match(word, bestGuess) == matches) {
                    filtered.push_back(word);
                }
            }
            candidates = filtered;
        }
    }

private:
    int match(const string& a, const string& b) {
        int count = 0;
        for (int i = 0; i < 6; i++) {
            if (a[i] == b[i]) count++;
        }
        return count;
    }
};