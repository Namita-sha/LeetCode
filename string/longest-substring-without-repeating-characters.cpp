class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxLen=0;
        for(int i=0;i<n;i++){
          int hash[256]={0};
            for(int j=i;j<n;j++){
           if(hash[s[j]]==1){//seen previously(ask yes/no(no storing))
            break;
           }
            int len=j-i+1;
           maxLen=max(len,maxLen);
           hash[s[j]]=1;//to remember that we have seen it
            }
             }
            return maxLen;
       
    }
};