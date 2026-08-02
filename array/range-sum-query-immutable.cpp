class NumArray {
public:
vector<int> nums;  //class variable which store copy of orignal array(permanent)

//Constructor runs once
//sumRange() runs later many times
//So we must store the array

    NumArray(vector<int>& nums) { //this nums is input array(temporary storage)
        int n=nums.size();
        this->nums=nums;//this->nums means “the class’s nums variable" and whole line means copy Copy input array into class variable
                        // this refers to current class/object
                                                 }
    int sumRange(int left, int right) {
        int sum=0;
     for(int i=left;i<=right;i++){
    sum+=nums[i]; //(permanaet storage nums here)
     }
     return sum;
    }
};

//patter: prefix sum
//key idea:repeatedly calculate sums over ranges (subarrays)
//complexity: o(n+q) ,q is for running  query in constant time
//      sc:  o(n)  extra prefix sum array
//why optimal :“Brute force recalculates the sum for every query in O(n). To optimize, we precompute prefix sums so that each query can be answered in O(1) using subtraction.”