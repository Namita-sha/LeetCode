class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0; // 0 as area cant be negative
        int n=height.size();
       int l=0,r=n-1;
       while(l<r){
       int area=min(height[l],height[r])*(r-l);  //no need to initialize area if you assign value before using it
        maxArea=max(maxArea,area);
        if(height[r]>height[l]){
            l++; }
        else{ r--;}
       }
       return maxArea;
    }
};
//TC: o(n)