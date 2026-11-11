class Solution(object):
    def isSubsequence(self, s, t):
        if len(s)>len(t):
            return False
        n=0
        for i in range(len(s)):
            if n==len(t):
                return False
            while t[n]!=s[i]:
                n+=1
                if n==len(t):
                    return False
            
            n+=1
        
        return True
        