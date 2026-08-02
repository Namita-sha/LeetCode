class Solution {
public:
    int reverseBits(int n) {
      unsigned int num=(unsigned int) n;
      unsigned int rev=0;
      for(int i=0;i<32;i++)  {
        rev <<=1;//Shift rev left by 1 to make space for the next bit eg: 0101 -> 1010
        rev |=(num & 1);
        // Extract the last bit of num using (num & 1)
            // and place it into the empty position of rev using OR
            // If last bit is 1, it gets added.
            // If last bit is 0, rev stays the same.
        num >>=1; // Remove the last bit from num by shifting it right
      }
      return (int)rev;
    }
};