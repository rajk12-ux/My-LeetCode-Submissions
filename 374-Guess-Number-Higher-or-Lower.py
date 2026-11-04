# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        l=1
        r=n
        while l<=r:
            mid=l+(r-l)/2
            res=guess(mid)
            if res==1:
                l=mid+1
            elif res==-1:
                r=mid-1
            else :
                return mid
        
        return 0
        