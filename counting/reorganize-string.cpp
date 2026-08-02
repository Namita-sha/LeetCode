class Solution {
public:
    string reorganizeString(string s) {
        int freq[26] = {};
        for (char c : s) {
            freq[c - 'a']++;
        }

        int n = s.size();
        // Max heap: (frequency, character)
        priority_queue<pair<int, char>> heap;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                if (freq[i] > (n + 1) / 2) return "";
                heap.push({freq[i], (char)(i + 'a')});
            }
        }

        string result;
        pair<int, char> prev = {0, ' '};

        while (!heap.empty()) {
            auto curr = heap.top();
            heap.pop();
            // Push back previous character if it still has remaining count
            if (prev.first > 0) {
                heap.push(prev);
            }
            result += curr.second;
            curr.first--;
            prev = curr;
        }

        return result.size() == n ? result : "";
    }
};