class Solution {
    public boolean isPerfectSquare(int num) {
        int l = 0, temp = num;//length of bits in binary of n
        while (temp > 0) {
            l++;
            temp /= 2;
        }
        int x = 1 << ((l + 1) / 2);
        while (x > num / x) {
            x = (x + num / x) / 2;
        }
        return x * x == num;
    }
}