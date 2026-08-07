class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>previous_num;
        for(int i=0;i<nums.size();i++){
            if(previous_num.count(nums[i])){
                if(i-previous_num[nums[i]]<=k){
                    return true;
                }
            }
            previous_num[nums[i]]=i;
        }
        return false;
    }
};