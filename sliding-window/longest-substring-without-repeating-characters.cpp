class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLength=0;
        for(int i=0;i<n;i++){
        int hash[256]={0};
        for(int j=i;j<n;j++){
        if(hash[s[j]]==1){
            break;
        }

        int len=j-i+1;
        maxLength=max(len,maxLength);
        hash[s[j]]=1;
        }
        }
        return maxLength;
    }
};