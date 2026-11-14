class Solution(object):
    def findDisappearedNumbers(self, nums):
        n=set(nums)
        missing=[]
        for i in range(1,len(nums)+1):
            if i not in n:
                missing.append(i)
        
        return missing
        