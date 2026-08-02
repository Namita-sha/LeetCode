class Solution {
public:
    string reverseWords(string s) {
        string result;
        int i = s.size() - 1;

        while (i >= 0) {
            // Skip spaces
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            // Find start of word
            int end = i;
            while (i >= 0 && s[i] != ' ') i--;

            // Append word to result
            if (!result.empty()) result += ' ';
            result += s.substr(i + 1, end - i);
        }

        return result;
    }
};