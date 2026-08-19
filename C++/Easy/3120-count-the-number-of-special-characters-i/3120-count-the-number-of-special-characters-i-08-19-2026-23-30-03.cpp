class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        unordered_set<char> lowercase;
        unordered_set<char> uppercase;
        for(int i=0;i<word.length();i++){
          if(word[i]>='a'&& word[i]<='z'){
            lowercase.insert(word[i]);
          }else{
            uppercase.insert(word[i]);
          }
        }
        for(char ch: lowercase){
          if(uppercase.find(toupper(ch))!=uppercase.end()){
            count++;
          }
        }

      return count;     
    }
};