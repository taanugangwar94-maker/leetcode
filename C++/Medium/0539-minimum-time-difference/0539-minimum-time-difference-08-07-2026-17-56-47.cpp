class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalmin=hours*60+min;
            minutes.push_back(totalmin);
        } 
        sort(minutes.begin(),minutes.end());
        int mini=INT_MAX;
        int n=minutes.size()-1;
        for(int i=0;i<n;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }
        int lastdiff1=(minutes[0]+1440)-minutes[n];
        int lastdiff2=minutes[n]-minutes[0];
        int lastdiff=min(lastdiff1,lastdiff2);
        mini=min(mini, lastdiff);

        return mini;
    }
};