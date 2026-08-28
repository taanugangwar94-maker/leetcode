class Solution {
public:
    double myPow(double x, int n) {
       double ans=1; 
       long long abs_n=n;
       if (abs_n < 0) {
            abs_n = -abs_n;
        }
       while(abs_n>0){
        if(abs_n&1){
          ans=ans*x;
        }
        x=x*x;
        abs_n>>=1;
       }
       if (n < 0) {
            return 1.0 / ans;
        }
       return ans;
    }
};