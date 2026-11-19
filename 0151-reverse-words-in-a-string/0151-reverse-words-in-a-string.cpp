class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string word="";
        for(int i = s.size()-1; i >=-1; i--){
            if(i>=0 && s[i]!=' '){
                word+=s[i];
            }else{   
                  if(word != "") {
                    reverse(word.begin(), word.end());
                    ans += word +" ";
                    word = "";
                }
            }
        }
        if(!ans.empty()) ans.pop_back();
        return ans;
    }
};