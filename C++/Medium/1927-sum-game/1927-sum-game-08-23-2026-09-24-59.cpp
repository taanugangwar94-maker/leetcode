class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int sumLeft = 0, sumRight = 0;
        int qLeft = 0, qRight = 0;
        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                if (num[i] == '?') {
                    qLeft++;
                } else {
                    sumLeft += (num[i] - '0');
                }
            } else {
                if (num[i] == '?') {
                    qRight++;
                } else {
                    sumRight += (num[i] - '0');
                }
            }
        }
        
        if ((qLeft + qRight) % 2 != 0) {
            return true; 
        }
        
        if (2 * (sumLeft - sumRight) == 9 * (qRight - qLeft)) {
            return false; 
        }
        
        return true;
    }
};