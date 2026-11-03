class Solution {
public:
    bool isPerfectSquare(int n) {
        int l = 0, temp = n;//length of bits in binary of n
        while (temp > 0) {
            l++;
            temp /= 2;
        }
        int x = 1 << ((l + 1) / 2);
        while (x > n / x) {
            x = (x + n / x) / 2;
        }
        return x * x == n;
    }
};