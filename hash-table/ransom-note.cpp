class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Create a map to store character frequencies from the magazine.
        unordered_map<char,int> magazineFreq;

        // Fill the frequency map with characters from the magazine.
        for (char ch : magazine) {
            magazineFreq[ch]++;
        }

        // Check against the frequency map with each character from ransomNote.
        for (char ch : ransomNote) {
            // Check if the character is missing or not enough in the magazine.
            if (!magazineFreq.count(ch) || magazineFreq[ch] == 0) {
                return false;
            }
            // Decrease the frequency count for the current character.
            magazineFreq[ch]--;
        }

        return true;
    }
};