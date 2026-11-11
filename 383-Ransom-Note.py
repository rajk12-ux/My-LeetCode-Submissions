class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        freq_r=[0]*26
        freq_m=[0]*26
        for c in ransomNote:
            freq_r[ord(c)-ord('a')]+=1
        
        for c in magazine:
            freq_m[ord(c)-ord('a')]+=1
        
        for i in range(26):
            if freq_r[i]>freq_m[i]:
                return False
        
        return True
        