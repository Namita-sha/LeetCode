class Solution {
public:
   bool isAnagram(string s, string t) {
    //step 1 : edge case too
   if(s.length()!=t.length()){
    return false;
   }

  int freq[26]={0};
   for(int i=0;i<s.length();i++){ //count how many letters s have 26 size arr and mark the s string element +!
    freq[s[i]-'a']++;//-a because array works on index for which number are required so we convert char to num
   }
   
   for(int i=0;i<t.length();i++){ 
    freq[t[i]-'a']--;
    }  //decremenet means marking t string elemnets in frquency array as -1 so they cancel out
   for(int i=0;i<26;i++){ // loop to check anagram as if all 0 means numbers canceled each other,are anagram
   if(freq[i]!=0){
    return false;
   }
   }
   return true;
   }
};