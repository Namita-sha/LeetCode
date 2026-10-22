class Solution {
public:
    bool isIsomorphic(string s, string t) {
   int arr1[256]={0},arr2[256]={0};
   int n=s.size(); // only s as both should have same size
   for(int i=0;i<n;i++){
    if(arr1[s[i]]!=arr2[t[i]]){
        return false;
    }
        arr1[s[i]]=i+1; //These characters were last seen at index i
        arr2[t[i]]=i+1;
    
   }
   return true;
}
};