class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        return dfs(heights, 0, bricks, ladders);
    }

private:
    int dfs(vector<int>& heights, int index, int bricks, int ladders) {
        if (index == (int)heights.size() - 1) {
            return index;
        }

        int diff = heights[index + 1] - heights[index];
        if (diff <= 0) {
            return dfs(heights, index + 1, bricks, ladders);
        }

        int best = index;
        if (bricks >= diff) {
            best = max(best, dfs(heights, index + 1, bricks - diff, ladders));
        }
        if (ladders > 0) {
            best = max(best, dfs(heights, index + 1, bricks, ladders - 1));
        }

        return best;
    }
};