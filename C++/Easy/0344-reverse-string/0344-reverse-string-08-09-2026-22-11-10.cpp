class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0;
        int h=s.size()-1;
        while(l<h){
            if(s[l]!=s[h]){
                swap(s[l],s[h]);
            }
            l++;
            h--;
        }
        
    }
};