class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double ,long long> ratiocount;
        long long count=0;
        for(int i=0;i<rectangles.size();i++){
          double ratio=(double)rectangles[i][0]/rectangles[i][1];
          if(ratiocount.find(ratio)!=ratiocount.end()){
            count+=ratiocount[ratio];
          }
          ratiocount[ratio]++;
        }
        return count;
    }
};