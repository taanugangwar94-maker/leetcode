class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
         string cleanString = "";
        for (int i = 0; i < s.length(); i++) {
                char c = s[i];
                if (isalnum(c)) { 
                  cleanString += tolower(c); 
            }
        }

        int start=0;
        int end =cleanString.length()-1;
        while(start<end){
            if(cleanString[start]!=cleanString[end]){
                return false;
            }else{
                start++;
                end--;
            }
        } 
        return true;
    }
};