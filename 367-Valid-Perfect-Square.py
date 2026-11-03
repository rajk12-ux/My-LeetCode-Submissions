class Solution(object):
    def isPerfectSquare(self, num):
        l = 0
        temp = num #length of bits in binary of n
        while temp > 0 :
            l+=1
            temp /= 2
        
        x = 1
        for i in range((l + 1) // 2):
            x *= 2
        while x > num // x :
            x = (x + num // x) / 2
        
        return (x * x == num)
        