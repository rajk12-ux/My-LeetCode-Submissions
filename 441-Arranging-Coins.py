class Solution {
    public int arrangeCoins(int n) {
        return (-1+(int)Math.sqrt(1l+8l*n))/2;
    }
}