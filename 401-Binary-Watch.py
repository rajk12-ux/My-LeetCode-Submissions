class Solution {
public:
    void addtime(bitset<6> min, bitset<4> hour,int turnedOn, int curr, vector<string>& ans) {

        if(turnedOn == 0) {
            int m = min.to_ulong();
            int h = hour.to_ulong();

            if(h <= 11 && m <= 59) {
                string s = (m < 10 ? "0" : "") + to_string(m);
                ans.push_back(to_string(h) + ":" + s);
            }
            return;
        }

        for(int i = curr; i < 10; i++) {
            if(i < 6)
                min.set(i);
            else
                hour.set(i - 6);

            addtime(min, hour, turnedOn - 1, i + 1, ans);

            if(i < 6)
                min.reset(i);
            else
                hour.reset(i - 6);
        }
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;

        addtime(bitset<6>(0), bitset<4>(0), turnedOn, 0, ans);

        return ans;
    }
};