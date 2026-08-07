class Solution {
public:
    int expandAroundindex(string str,int i,int j){
        int count=0;
        while(i>=0 && j<str.length() && str[i]==str[j]){
            count++;
            i--;
            j++;
        }

        return count;
    } 

    int countSubstrings(string s) {
        int totalcount=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int oddstring=expandAroundindex(s,i,i);
            totalcount=totalcount+oddstring;
            int evenstring=expandAroundindex(s,i,i+1);
            totalcount=totalcount+evenstring;
        }
        return totalcount;
    }
};