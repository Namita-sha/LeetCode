class Solution {
    public boolean isPalindrome(int x) {
         int rev=0;
         int org=x;
        while(x!=0){ // other conition fil for negtive number
             int l=x%10;
             if (x < 0) {
    return false;
}
            if(rev>Integer.MAX_VALUE/10 || rev==Integer.MAX_VALUE/10 && l>7){
                return false;
            } 
              if(rev<Integer.MIN_VALUE/10 || rev==Integer.MIN_VALUE/10 && l<-8){
                return false;
            } 
           
            rev=rev*10+l;
            x=x/10;
            
        }
        if(rev==org){
        return true;
        }
        else{
         return false;
        }
    }
}