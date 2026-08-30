class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int n= nums.size();
        if(nums.size()==1) 
            return 1;
        int minimum=nums[0];
        int index1=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<minimum){
                minimum=nums[i];
                index1=i;
            }
        }
        int maximum=nums[0];
        int index2=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>maximum){
                maximum=nums[i];
                index2=i;
            }
        }
        int left = max(index1, index2) + 1;
        int right = n - min(index1, index2);
        int both = min(index1, index2) + 1 + n - max(index1, index2);

        return min({left, right, both});
    }
};