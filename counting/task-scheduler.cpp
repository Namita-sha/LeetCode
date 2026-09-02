class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char task : tasks) {
            freq[task - 'A']++;
        }
        sort(freq.begin(), freq.end());
        int time = 0;
        while (freq[25] > 0) {
            int i = 0;
            while (i <= n) {
                if (freq[25] == 0) break;
                if (i < 26 && freq[25 - i] > 0) {
                    freq[25 - i]--;
                }
                time++;
                i++;
            }
            sort(freq.begin(), freq.end());
        }

        return time;
    }
};