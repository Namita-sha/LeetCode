class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;   // ✅ declare result container here

        for (auto& curr : intervals) {
            // Case 1: no overlap, current interval ends before newInterval starts
            if (curr[1] < newInterval[0]) {
                res.push_back(curr);
            }
            // Case 2: no overlap, current interval starts after newInterval ends
            else if (curr[0] > newInterval[1]) {
                res.push_back(newInterval);
                newInterval = curr;  // replace newInterval with current
            }
            // Case 3: overlap → merge intervals
            else {
                newInterval[0] = min(newInterval[0], curr[0]);
                newInterval[1] = max(newInterval[1], curr[1]);
            }
        }

        // Add the last newInterval
        res.push_back(newInterval);

        return res;
    }
};
