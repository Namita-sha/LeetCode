class Solution {
public:
    int maxNumberOfBalloons(string text) {
        // Frequency array for all lowercase characters
        vector<int> count(26, 0);
        for (char c : text) {
            if ('a' <= c && c <= 'z')
                count[c - 'a']++;
        }

        // Calculate the minimum number of "balloon" we can form
        int minBalloons = INT_MAX;

        // Check against required characters
        minBalloons = min(minBalloons, count['b' - 'a']);
        minBalloons = min(minBalloons, count['a' - 'a']);
        minBalloons = min(minBalloons, count['l' - 'a'] / 2);
        minBalloons = min(minBalloons, count['o' - 'a'] / 2);
        minBalloons = min(minBalloons, count['n' - 'a']);

        return minBalloons == INT_MAX ? 0 : minBalloons;
    }
};