class Solution {
private:
        int issquaredigit(int val){
        int sum=0;
        while(val!=0){
            int d=val%10;
            sum=sum+d*d;
            val=val/10;
        }
        return sum;
    }
public:
        bool isHappy(int n) {
        unordered_map<int,int>visited;
        while(n!=1 && visited.find(n)== visited.end()){
            visited[n]=1;
            n=issquaredigit(n);
        }
        return n==1;
    }
};