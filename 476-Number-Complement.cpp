class Solution {
public:
    int findComplement(int num) {
        int n=num;
        int ans=0;
        int curr=1;
        while(n){
            ans += curr*(1 - n%2);
            curr =curr <<1;
            n = n>> 1;
        }
        return ans;
    }
};