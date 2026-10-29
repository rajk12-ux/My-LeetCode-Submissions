class Solution(object):
    def reverseString(self, s):
        for i in range(0,len(s)//2):
            t=s[i] 
            s[i]=s[len(s)-1-i]
            s[len(s)-1-i]=t
        