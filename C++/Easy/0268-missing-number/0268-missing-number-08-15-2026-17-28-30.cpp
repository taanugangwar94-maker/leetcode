class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int missing_number=nums.size();
        for(int i=0;i<nums.size();i++){
          missing_number^=i;
          missing_number^=nums[i];
        }
        return missing_number;
    }
};