class Solution {
public:
    int countLessEqual(vector<vector<int>>& matrix, int mid) {
        int n =matrix.size();
        int i =n -1,j =0,count = 0;
        while(i>= 0 && j<n) {
            if(matrix[i][j]<= mid) {
                count +=i + 1;
                j++;
            } else {
                i--;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int left = matrix[0][0], right = matrix[n-1][n-1];
        while(left < right) {
            int mid = left + (right - left) / 2;
            if(countLessEqual(matrix, mid) < k)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

