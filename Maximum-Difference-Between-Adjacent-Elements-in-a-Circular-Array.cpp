class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxd=abs(nums[nums.size()-1]-nums[0]);
        for(int i=1;i<nums.size();i++){
            maxd=max(maxd,abs(nums[i]-nums[i-1]));
        }
        return maxd;
    }
};