class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            long long product=1;
            long long GCD=0;
            long long  LCM=1;
            for(int j=i;j<nums.size();j++){
                 if(product > LLONG_MAX / nums[j])
                    break;
                product *= nums[j];
                GCD = gcd(GCD, (long long ) nums[j]);
                LCM = lcm(LCM, (long long )nums[j]);
                if(product == LCM * GCD){
                    ans=max(ans,j-i+1);
                } 
            }
        }
        return ans;
    }
};