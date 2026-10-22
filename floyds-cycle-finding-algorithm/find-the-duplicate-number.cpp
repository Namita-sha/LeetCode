class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*
        int slow = nums[0], fast = nums[0];  // Initialize slow and fast pointers to the first element
    do {
        slow = nums[slow];         // Move slow pointer by 1 step
        fast = nums[nums[fast]];   // Move fast pointer by 2 steps
    } while (slow != fast);  // Continue until the slow and fast pointers meet (cycle detected)

    // Phase 2: Find the entry point of the cycle (duplicate number)
    slow = nums[0];  // Reset slow pointer to the beginning of the array
    while (slow != fast) {
        slow = nums[slow];  // Move both slow and fast pointers by 1 step
        fast = nums[fast];
    }
    
    return slow;  // When slow and fast meet, it is the entry point of the cycle (duplicate)
} 
 */

  int low = 1, high = nums.size() - 1;  // Set the search range between 1 and n

    while (low < high) {
        int mid = low + (high - low) / 2;  // Find the midpoint
        
        // Count how many numbers are less than or equal to 'mid'
        int count = 0;
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }

        // If count exceeds mid, duplicate must be in the left half
        if (count > mid) {
            high = mid;  // Narrow down to the left half
        } else {
            low = mid + 1;  // Narrow down to the right half
        }
    }

    return low;  // The duplicate number is found when low == high
}
   
};