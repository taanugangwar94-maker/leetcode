class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,char>hashmap;
        for(int i=0;i<s.size();i++ ){
            hashmap[s[i]]+=1;
        }
        for(int i=0;i<t.size();i++){
            if(hashmap[t[i]]==0){
               return t[i];
            }
            hashmap[t[i]]--;
        }
    return ' ';
    }
};