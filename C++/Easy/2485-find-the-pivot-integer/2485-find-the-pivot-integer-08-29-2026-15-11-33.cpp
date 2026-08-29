class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int s1=0 ,s2=0;
       for(int i=1;i<=n;i++){
          s1+=i;
          s2=0;
          for(int j=i;j<=n;j++){
            s2+=j;
          }
          if(s1==s2){
            return i;
        }
       }
        return -1;
    }
};