class Solution {
public:

    bool ispalindrome(const string&str , int i,int j){
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.length();
        string ans = "";
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ispalindrome(s,i,j))
                {
                        string t=s.substr(i,j-i+1);
                        ans=t.size()>ans.size() ? t:ans;

                } 
                
            }
        }
        return ans;
    }
};