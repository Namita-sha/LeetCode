class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
        int carry = 1; // initial +1

        // We'll store result in reverse to avoid inserting at front
        vector<int> result;

        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            result.push_back(sum % 10); // current digit
            carry = sum / 10;           // carry for next digit
        }

        if (carry) result.push_back(carry); // if final carry remains

        // Reverse to get correct order
        reverse(result.begin(), result.end());

        return result; 
    }
};