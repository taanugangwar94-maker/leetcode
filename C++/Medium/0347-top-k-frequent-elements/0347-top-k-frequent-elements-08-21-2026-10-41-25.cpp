class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freqmp;
        for(int i=0;i<nums.size();i++){
          freqmp[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxhp;
        for(auto it=freqmp.begin();it!=freqmp.end();it++){
          int number=it->first;
          int frequency=it->second;
          maxhp.push({frequency , number});
        }
          vector<int>ans;
          for(int i=0;i<k;i++){
            int number=maxhp.top().second;
            ans.push_back(number);
            maxhp.pop();
          }
          return ans;
      }
};