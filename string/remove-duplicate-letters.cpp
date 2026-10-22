class Solution {
public:
    string removeDuplicateLetters(string s) {
    vector<int> last(26, 0);

    // Store the last index of every character
    for (int i = 0; i < s.size(); i++) {
        last[s[i] - 'a'] = i;
    }

    string ans;
    vector<bool> used(26, false);

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        // Already included
        if (used[c - 'a'])
            continue;

        // Remove bigger characters if they appear again later
        while (!ans.empty() &&
               ans.back() > c &&
               last[ans.back() - 'a'] > i) {

            used[ans.back() - 'a'] = false;
            ans.pop_back();
        }

        ans.push_back(c);
        used[c - 'a'] = true;
    }

    return ans;
}
};