class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string best_str = "";
        int left = 0;
        int count = 0;
        
        for (int right = 0; right < s.length(); right++) {
            if (s[right] == '1') {
                count++;
            }
            
            while (count == k) {
                string curr = s.substr(left, right - left + 1);
                
                if (best_str == "" || curr.length() < best_str.length() || 
                   (curr.length() == best_str.length() && curr < best_str)) {
                    best_str = curr;
                }
                
                if (s[left] == '1') {
                    count--;
                }
                left++;
            }
        }
        
        return best_str;
    }
};