class Solution {
public:
       int maxDepth(string s) {
        int p = 0;  //how many parenthesis are currently open
        int ans = 0; //The maximum depth found so far
        for (char x : s) {
            // Increase depth on open parenthesis
            if (x == '(') p++;
            // Decrease depth on close parenthesis
            else if (x == ')') p--;
            // Update maximum depth encountered
            ans = max(ans, p);
        }
        return ans;
    }
};