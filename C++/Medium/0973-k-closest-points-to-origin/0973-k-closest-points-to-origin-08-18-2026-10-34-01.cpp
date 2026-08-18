class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      vector<vector<int>>ans;
      int sqrt1;
      int sqrt2;
      for(int i=0;i<points.size();i++){
        int a=points[i][0];
        int b=points[i][1];
         sqrt1=a*a+b*b;
        for(int j=i+1;j<points.size();j++){
          int c=points[j][0];
          int d=points[j][1];
          sqrt2=c*c+d*d;
          if(sqrt1>sqrt2){
           swap(points[i],points[j]);

            sqrt1=sqrt2;
          }
         }
      }
      for(int i=0;i<k;i++){
          ans.push_back(points[i]);
         }
      return ans;
    }
};