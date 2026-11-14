class Solution {
public:
    int arrangeCoins(int n) {
        return (-1+sqrt(1ll+8ll*n))/2;
    }
};