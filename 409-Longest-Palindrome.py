class Solution(object):
    def longestPalindrome(self, s):
        freq=[0]*58
        for c in s:
            freq[ord(c)-ord('A')]+=1
        
        odd_freq=False
        ans=0
        for f in freq:
            if f%2==1:
                odd_freq=True
            ans += f//2
        
        ans *=2
        if odd_freq==True:
            ans+=1
        
        return ans
        