class Solution(object):
    def reverseVowels(self, s):
        vowel_indexes=[]
        l=len(s)
        for i in range(0,l):
            if s[i] in "aeiouAEIOU":
                vowel_indexes.append(i)
        vl=len(vowel_indexes)
        s=list(s)
        for i in range(0,vl/2):
            s[vowel_indexes[i]],s[vowel_indexes[vl-1-i]]=s[vowel_indexes[vl-1-i]],s[vowel_indexes[i]]
        return ''.join(s)
        