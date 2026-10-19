class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1, f = 0;
        while (l < r) {
            f = (l + r) / 2;
            if (nums[f] >= target) r = f;
            else l = f + 1;
        }
        f = l;
        vector<int> ans;
        while (f < (int)nums.size() && nums[f] == target) {
            ans.push_back(f++);
        }
        return ans;
    }
};