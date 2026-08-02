class Solution {
public:
    // Binary search to find the next event that starts after current ends
    int findNextEvent(const vector<vector<int>>& events, int end, int left) {
        int low = left, high = events.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (events[mid][0] > end) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    int maxValue(vector<vector<int>>& events, int k) {
        // Sort events by start day
        sort(events.begin(), events.end());

        int n = events.size();
        // dp[i][k] stores the result for index i and remaining k events
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        // Bottom-up DP
        for (int i = n - 1; i >= 0; --i) {
            for (int j = 1; j <= k; ++j) {
                // Option 1: Skip
                int skip = dp[i + 1][j];

                // Option 2: Take this event
                int nextIndex = findNextEvent(events, events[i][1], i + 1);
                int take = events[i][2] + dp[nextIndex][j - 1];

                dp[i][j] = max(skip, take);
            }
        }

        return dp[0][k];
    }
};
