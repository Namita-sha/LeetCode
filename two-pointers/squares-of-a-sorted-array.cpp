class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
       int left=0;
       int right=n-1;
       vector<int> temp(n,0); // to store sorted squares 
       for(int i=n-1;i>=0;i--){ // so to store biggest number at  end

        int leftSquare=nums[left]*nums[left];
        int rightSquare=nums[right]*nums[right];

        if(leftSquare>rightSquare){
            temp[i]=leftSquare;
            left++;
        }
        else{
            temp[i]=rightSquare;
            right--;
        }
       }
       return temp;
    }
};