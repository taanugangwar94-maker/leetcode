class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count=0,even=1,odd=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0){
                count+=odd;
                even++;
            }else{
                count+=even;
                odd++;
            }
            count%=1000000007;
        }
        return count;
    }
};