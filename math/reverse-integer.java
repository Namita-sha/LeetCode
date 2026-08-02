class Solution {
    public int reverse(int x) {
        int rev=0;
        while(x!=0){ // other conition fil for negtive number
             int l=x%10;
            if(rev>Integer.MAX_VALUE/10 || rev==Integer.MAX_VALUE/10 && l>7){
                return 0;
            } 
              if(rev<Integer.MIN_VALUE/10 || rev==Integer.MIN_VALUE/10 && l<-8){
                return 0;
            } 
           
            rev=rev*10+l;
            x=x/10;
            
        }
        return rev;
    }
}