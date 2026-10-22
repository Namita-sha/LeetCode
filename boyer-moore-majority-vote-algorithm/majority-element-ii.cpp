class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate1=INT_MIN; //0 fails for 0 case
        int cnt1=0;
         int candidate2=INT_MIN;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0 && candidate2!=nums[i]){
                candidate1=nums[i];
                cnt1=1;
            }
             else if(cnt2==0 && candidate1!=nums[i]){
               candidate2=nums[i];
                cnt2=1;
               } 
            
            else if(candidate1==nums[i]){
            cnt1++;
            }
        
            else if(candidate2==nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> result;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){ // to confirm the candidates
        if(candidate1==nums[i]){ 
            cnt1++;
        }
        if(candidate2==nums[i]){ 
            cnt2++;
        }
        }
        if(cnt1>n/3){
            result.push_back(candidate1);
        }
         if(cnt2>n/3){
            result.push_back(candidate2);
        }
       
        return result;
    }
};