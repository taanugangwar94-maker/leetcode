class Solution {
public:
    bool isPalindrome(int x) {
        long long int n=0;
        int  copy=x;
        if( x< 0) {
              return false;
        }
        while(x!=0){ 
             n=n*10+(x%10);
             x=x/10;
        }
         if(n==copy){
            return true;
         }else{
            return false;
         }
 
    }

};