class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int largest_number=nums[nums.size()-1];
        int second_largest_number=nums[nums.size()-2];
        return (largest_number-1)*(second_largest_number-1);
    }
};