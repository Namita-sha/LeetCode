class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
              for (int i = 0; i < n; i++) {
            if (arr[i] <= k) { //loop over each no. if it exist then move to next
                k++;  
            } else {
                break; 
            }
        }
        return k;
    }
};