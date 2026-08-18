class Solution {
public:
      static bool compare (string a,string b){
      string str1=a+b;
      string str2=b+a;
      return str1>str2;
    }
    string largestNumber(vector<int>& nums) {
      vector<string>snums;
      for(int i=0;i<nums.size();i++){
        snums.push_back(to_string(nums[i]));
      }
      sort(snums.begin(),snums.end(),compare);
      if(snums[0]=="0"){
        return "0";
      }
      string ans="";
      for(int i=0;i<snums.size();i++){
        ans+=snums[i];
      }
        return ans;
        
    }
};