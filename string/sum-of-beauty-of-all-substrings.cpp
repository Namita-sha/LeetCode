class Solution {
public:
    int beautySum(string s) {
      int n = s.length();
        int sum = 0;

        // Loop over all substrings
        for (int i = 0; i < n; i++) {  //This selects the starting index of substring
            unordered_map<char, int> freq;

            for (int j = i; j < n; j++) { //This expands the substring
                // Increase frequency of current character
                freq[s[j]]++;//Increase frequency of current character

                int maxi = INT_MIN;
                int mini = INT_MAX;

                // Find max and min frequency
                for (auto it : freq) {
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }
                sum += (maxi - mini);
            }
        }

        return sum;
    }
};