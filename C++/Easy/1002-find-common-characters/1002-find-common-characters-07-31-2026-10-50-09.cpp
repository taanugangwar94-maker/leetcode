#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, 100); 
        
        for (int i = 0; i < words.size(); i++) {
            int current_freq[26] = {0}; 
            string word = words[i];
            
            for (int j = 0; j < word.length(); j++) {
                char ch = word[j];
                current_freq[ch - 'a']++;
            }
             
            for (int k = 0; k < 26; k++) {
                if (current_freq[k] < minFreq[k]) {
                    minFreq[k] = current_freq[k];
                }
            }
        }
        
        vector<string> ans;
        for (int i = 0; i < 26; i++) {
            while (minFreq[i] > 0) {
                string s = "";
                s += (char)('a' + i);
                ans.push_back(s);
                minFreq[i]--;
            }
        }
        
        return ans;
    }
};
