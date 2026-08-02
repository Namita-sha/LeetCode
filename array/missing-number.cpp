class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // for(int i=0;i<=n;i++){
        //   int flag=0;
       
        // for(int j=0;j<n;j++){
        //     if(nums[j]==i){
        //         flag=1;
        //         break;
        //     }
        // }
        // if(flag==0) return i;
        // }
        // return -1;
//................................optimal 1 but extra space
    //     int sum=(n*(n+1))/2;
    //      int s2=0;
    //     for(int i=0;i<n;i++){
           
    //         s2+=nums[i];
    //     }
    //     return sum - s2;
   
   //...................optimal 3
   int xor1=0,xor2=0;
   for(int i=0;i<n;i++){
    xor2^=nums[i];
    xor1^=(i+1);
   }
 
   return xor1^xor2;
    }
};
  