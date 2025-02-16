class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,set<int>> indcs;
        for(int i=0;i<nums.size();i++){
            indcs[nums[i]].insert(i);
            if(indcs[nums[i]].size()==2){
                if(*indcs[nums[i]].rbegin()-*indcs[nums[i]].begin() <= k){
                    return true;
                }
                else indcs[nums[i]].erase(indcs[nums[i]].begin());
            }
        }
        return false;
        
    }
};