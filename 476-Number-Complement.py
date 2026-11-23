class Solution(object):
    def findComplement(self, num):
        n=num
        ans=0
        curr=1
        while n !=0:
            ans += curr*(1 - n%2)
            curr = curr <<1
            n = n>> 1
        return ans
        