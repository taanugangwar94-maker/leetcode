class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
       vector<int>ans;
        for(int i=left;i<=right;i++){
          int temp=i;
          bool valid=true;
          while(temp>0){
            int last_digit=temp%10;
            if(last_digit==0 || i%last_digit!=0){
                valid= false;
            }
            temp=temp/10;
          }
          if(valid){
            ans.push_back(i);
          }
        }
        return ans;
        
    }
};