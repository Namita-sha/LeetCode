class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n < 3) return n;
        int maxCount = 2;
        // Check every pair and count collinear points
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int count = 2;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    // Cross product to check collinearity
                    long long cross = (long long)(points[j][1] - points[i][1]) * (points[k][0] - points[i][0])
                                    - (long long)(points[k][1] - points[i][1]) * (points[j][0] - points[i][0]);
                    if (cross == 0) count++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};