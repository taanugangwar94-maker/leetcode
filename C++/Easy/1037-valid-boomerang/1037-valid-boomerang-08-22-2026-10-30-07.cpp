class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
      int x[3];
      int y[3];
      for(int i=0;i<3;i++){
        x[i]=points[i][0];
        y[i]=points[i][1];
      }
        return (y[1] - y[0]) * (x[2] - x[1]) != (y[2] - y[1]) * (x[1] - x[0]);
    }
};