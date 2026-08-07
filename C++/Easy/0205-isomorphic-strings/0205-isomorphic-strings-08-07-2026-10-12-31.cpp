class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) 
            return false;
        unordered_map<char ,char>mapS;
        unordered_map<char,char>mapT;

        for(int i=0;i<s.length();i++){
            char char_s=s[i];
            char char_T =t[i];

            if(mapS.find(char_s)!=mapS.end() && mapS[char_s]!=char_T ){
                return false;
            }
            if(mapT.find(char_T)!=mapT.end()&& mapT[char_T]!=char_s){
                return false;
            }
            mapS[char_s]=char_T;
            mapT[char_T]=char_s;
        }
        return true;

    }
};