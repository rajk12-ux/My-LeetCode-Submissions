class Solution(object):
    def licenseKeyFormatting(self, s, k):
        letters = []

        for c in s:
            if c != '-':
                letters.append(c.upper())

        if len(letters) == 0:
            return ""

        letters.reverse()

        ans = ""

        for i in range(0, len(letters), k):
            for j in range(i, min(i+k, len(letters))):
                ans += letters[j]

            ans += '-'

        ans = ans[:-1]
        return ans[::-1]