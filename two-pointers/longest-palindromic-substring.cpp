class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int start=0;
        int maxLen=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
            int left=i;
            int right=j;
            bool palindrome=true;
            while(left<right){
                if(s[left]!=s[right]){
                    palindrome=false;
                    break;
                }
                left++;
                right--;
            }

        if (palindrome && (j - i + 1) > maxLen) {
                    start = i;
                    maxLen = j - i + 1;
                }
            }
        }

        return s.substr(start, maxLen); 
    }
};