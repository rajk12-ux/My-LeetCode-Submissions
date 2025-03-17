class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> dis;
        unordered_map<int,int> prefix;
        unordered_map<int,int> suffix;
        for(int i:nums){
            ++suffix[i];
        }
        for(int i=0;i<nums.size();i++){
            ++prefix[nums[i]];
            --suffix[nums[i]];
            if(suffix[nums[i]]==0)suffix.erase(nums[i]);
            dis.push_back(prefix.size()-suffix.size());
        }
        return dis;
    }
};