class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int maxx = 0;
        for (int num : nums) {
            maxx = max(maxx, num);
        }
        vector<int> freq(maxx + 1, 0);
        for (int num : nums) {
            freq[num]++;
        }
        int n = nums.size();
        vector<vector<int>> ans(n / 3, vector<int>(3, 0));
        int ind = 0;
        for (int i = 0; i < n / 3; i++) {
            for (int j = 0; j < 3; j++) {
                while (freq[ind] == 0) ind++;
                ans[i][j] = ind;
                freq[ind]--;
            }
            if (ans[i][2] - ans[i][0] > k) return {};
        }
        return ans;
    }
};