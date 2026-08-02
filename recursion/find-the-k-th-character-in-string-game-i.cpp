class Solution {
public:
    char kthCharacter(int k) {
        std::string word = "a";

        // helper lambda to get the next character (wrap 'z' → 'a')
        auto nextChar = [](char c) -> char {
            return c == 'z' ? 'a' : c + 1;
        };

        // keep extending until we have at least k characters
        while (static_cast<int>(word.size()) < k) {
            int n = word.size();
            word.reserve(n * 2);           // optional—avoids repeated reallocations
            for (int i = 0; i < n; ++i) {
                word.push_back(nextChar(word[i]));
            }
        }

        return word[k - 1];
    }
};
