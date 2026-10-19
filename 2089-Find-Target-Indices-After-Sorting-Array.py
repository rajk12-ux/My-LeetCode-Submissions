class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        nums.sort()
        l = 0
        r = len(nums) - 1
        f = 0
        while l < r :
            f = (l + r) // 2
            if nums[f] >= target:
                 r = f
            else :
                l = f + 1
        f = l
        ans=[]
        while f < len(nums) and nums[f] == target :
            ans.append(f)
            f+=1
        return ans