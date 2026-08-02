class Solution {
public:
    int possibleStringCount(string word) {
    int ans = 1;                    // no long‑press case
        for (size_t i = 1; i < word.size(); ++i)
            if (word[i] == word[i - 1]) // repeated neighbour ⇒ extra choice
                ++ans;
        return ans;
    }
};