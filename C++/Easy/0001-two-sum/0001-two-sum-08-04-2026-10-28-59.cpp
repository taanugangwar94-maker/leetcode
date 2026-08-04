class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_count;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(num_count.find(val)!=num_count.end()){
                return {num_count[val],i};
            }
            num_count[nums[i]]=i;
        }
        return {};
    }
};