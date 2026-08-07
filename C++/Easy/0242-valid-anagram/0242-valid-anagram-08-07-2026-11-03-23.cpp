class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,int>freq;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        for(int j=0;j<s.length();j++){
            freq[t[j]]--;
        }
        for (char c = 'a'; c <= 'z'; c++) {
            if (freq[c] != 0) { 
                    return false;
            }
        }
        return true;
    }
};