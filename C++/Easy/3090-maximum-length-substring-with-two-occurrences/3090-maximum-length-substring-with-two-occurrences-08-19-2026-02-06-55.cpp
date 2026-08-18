class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int j=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
          mp[s[i]]++;
          if(mp[s[i]]>2){
            while(mp[s[i]]>2){
              mp[s[j]]--;
              j++;
            }

          }else{
            ans=max(ans,i-j+1);
          }
        }
        return ans;
    }
};