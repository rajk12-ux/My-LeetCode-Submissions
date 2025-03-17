class Solution {
public:
    int fib(int n) {
        if(n<2)return n;
        int curr=1,prev=1,pprev=0;
        n-=2;
        while(n--){
            pprev=prev;
            prev=curr;
            curr += pprev;
        }
        return curr;
    }
};