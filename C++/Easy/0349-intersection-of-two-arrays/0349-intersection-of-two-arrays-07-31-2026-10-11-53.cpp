class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>freq_nums1(1002,0);
        vector<int>freq_nums2(1002,0);
        for(int i=0;i<nums1.size();i++){
            freq_nums1[nums1[i]]++;
        }
        for(int j=0;j<nums2.size();j++){
            freq_nums2[nums2[j]]++;
        }
        vector<int>ans;
        for(int i=0;i<1001 ;i++){
            if(freq_nums1[i]>0 && freq_nums2[i]>0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};