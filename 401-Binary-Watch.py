class Solution(object):

    def addtime(self, min, hour, turnedOn, curr, ans):

        if turnedOn == 0:
            m = min
            h = hour

            if h <= 11 and m <= 59:
                s = ("0" if m < 10 else "") + str(m)
                ans.append(str(h) + ":" + s)
            return

        for i in range(curr, 10):

            if i < 6:
                min |= (1 << i)
            else:
                hour |= (1 << (i - 6))

            self.addtime(min, hour, turnedOn - 1, i + 1, ans)

            if i < 6:
                min &= ~(1 << i)
            else:
                hour &= ~(1 << (i - 6))

    def readBinaryWatch(self, turnedOn):
        ans = []
        self.addtime(0, 0, turnedOn, 0, ans)
        return ans