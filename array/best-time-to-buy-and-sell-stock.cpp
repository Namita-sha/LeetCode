class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
      int minprice=INT_MAX; //not 0 ,It ensures the first price becomes the minimum
      for(int price:prices){
       minprice=min(minprice,price);
            maxprofit=max(maxprofit,price-minprice); //we computed nomal profit here
        
       }
       
      return maxprofit;
    }
};// TC:o(n)