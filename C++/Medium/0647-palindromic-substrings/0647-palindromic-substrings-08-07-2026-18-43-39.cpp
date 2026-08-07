class Solution {
public:
    bool ispalindrome(string str){
        int i=0;
        int j=str.length()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }


    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            for(int j=1;j<=s.length()-i;j++){
                string sub=s.substr(i,j);
                if (ispalindrome(sub)){
                    count++;
                }
            }
        }
        return count;
    } 
};