class Solution(object):
    def thirdMax(self, nums):
        st = set()
        for n in nums:
            st.add(n)

            if len(st) > 3:
                st.remove(min(st))
        if len(st)<3:
            return max(st)
        return min(st)