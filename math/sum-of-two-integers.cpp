class Solution {
public:
    int getSum(int a, int b) {
        // Increment or decrement a by 1, b times
        while (b > 0) {
            a = -~a;  // a + 1 (bitwise)
            b = ~-b;  // b - 1 (bitwise)
        }
        while (b < 0) {
            a = ~-a;  // a - 1 (bitwise)
            b = -~b;  // b + 1 (bitwise)
        }
        return a;
    }
};