class Solution {
public:
    vector<vector<int>> res;   // to store all valid combinations
    
    // helper function for backtracking
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& path) {
        if (target == 0) {              // \U0001f3af found valid combination
            res.push_back(path);
            return;
        }
        if (target < 0) return;         // ❌ overshoot, stop exploring
        
        for (int i = start; i < candidates.size(); i++) {
            path.push_back(candidates[i]);                       // choose candidate
            backtrack(candidates, target - candidates[i], i, path); // reuse same i (not i+1)
            path.pop_back();                                     // backtrack
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        backtrack(candidates, target, 0, path);
        return res;
    }
};
