class Solution {

    void addtime(int min, int hour, int turnedOn, int curr, List<String> ans) {

        if(turnedOn == 0) {
            int m = min;
            int h = hour;

            if(h <= 11 && m <= 59) {
                String s = (m < 10 ? "0" : "") + m;
                ans.add(h + ":" + s);
            }
            return;
        }

        for(int i = curr; i < 10; i++) {

            if(i < 6)
                min |= (1 << i);
            else
                hour |= (1 << (i - 6));

            addtime(min, hour, turnedOn - 1, i + 1, ans);

            if(i < 6)
                min &= ~(1 << i);
            else
                hour &= ~(1 << (i - 6));
        }
    }

    public List<String> readBinaryWatch(int turnedOn) {
        List<String> ans = new ArrayList<>();

        addtime(0, 0, turnedOn, 0, ans);

        return ans;
    }
}