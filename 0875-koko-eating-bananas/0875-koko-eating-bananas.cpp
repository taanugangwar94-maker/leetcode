class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==h){
            return *max_element(piles.begin(),piles.end());
        }
        // int minimum_possible_speed
        int s=1;
        // maximum_possible_speed
        int e=*max_element(piles.begin(),piles.end());

        while(s<e){
            int mid=s+(e-s)/2;
            int total_hours=0;
            for(int i=0;i<piles.size();i++){
                int time = piles[i] / mid;
                if(piles[i] % mid != 0) {
                    time++;
                }
                total_hours+=time;
            }
            if(total_hours<=h){
                e=mid;
            }else{
                s=mid+1;
            }

        }
        return s;
    }
};