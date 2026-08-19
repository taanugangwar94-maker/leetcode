class Solution {
public:
    string greatestLetter(string s) {
      if(s.empty()) return s;
        unordered_set<char> lowercase;
        unordered_set<char> uppercase;
        for(int i=0;i<s.length();i++){
          if(s[i]>='a'&& s[i]<='z'){
            lowercase.insert(s[i]);
          }else{
            uppercase.insert(s[i]);
          }
        }
        char maxchar=0;
        for(char ch: uppercase){
          if(lowercase.find(tolower(ch))!=lowercase.end()){
            if (ch > maxchar) 
                maxchar = ch; 
    
              }
          }
        
      return maxchar == 0 ? "" : string(1, maxchar);
    }
};