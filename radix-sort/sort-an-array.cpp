class Solution {
public:
    void merge(vector<int>& nums,int l,int m,int r) { 
       int n1 =m-l+1;
        int n2 =r-m;
        vector<int> left(n1),right(n2);
        for(int i =0;i<n1;i++) 
        left[i] =nums[l+i];
        for(int j =0;j<n2;j++) 
        right[j] =nums[m+1+j];

        int i = 0, j = 0, k = l;

        // Merge back into nums
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) nums[k++] = left[i++];
            else nums[k++] = right[j++];
        }

        // Copy remaining elements
        while (i < n1) nums[k++] = left[i++];
        while (j < n2) nums[k++] = right[j++];
    }

    // Recursive merge sort
    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;

        mergeSort(nums, l, m);       // sort left half
        mergeSort(nums, m + 1, r);   // sort right half
        merge(nums, l, m, r);        // merge halves
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
    
};