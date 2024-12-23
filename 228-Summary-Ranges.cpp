class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)return {};
        vector<pair<int,int>> ranges={{nums[0],nums[0]}};
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1] + 1){
                ranges.rbegin()->second = nums[i-1];
                ranges.push_back({nums[i],nums[i]});
            }
        }
        ranges.rbegin()->second = *nums.rbegin();
        vector<string> ans;
        for(pair<int,int> p:ranges){
            if(p.first != p.second){
                ans.push_back(to_string(p.first)+"->"+to_string(p.second));
            }
            else ans.push_back(to_string(p.first));
        }
        return ans;
    }
};