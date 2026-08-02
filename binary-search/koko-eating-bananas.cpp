class Solution {
public:
    long long minHourlySpeed(vector<int>& piles, int k) {
      long long totalHours=0;
       int n=piles.size();
       for(int i=0;i<n;i++){
        totalHours += (piles[i] + k - 1) / k;
       }
       return totalHours;
    }
int minEatingSpeed(vector<int>& piles, int h){
    int maxPile= *max_element(piles.begin(),piles.end());
    int low=1;
    int high= maxPile;
    int ans=high;
    while(low<=high){
        int mid=low+(high-low)/2;
        long long hours=minHourlySpeed(piles,mid);
        if(hours<=h){
             ans=mid;
             high=mid-1;
        }
        else
        low=mid+1;
}
return ans;
    }
};