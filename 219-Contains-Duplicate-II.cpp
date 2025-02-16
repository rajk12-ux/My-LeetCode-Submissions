class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,set<int>> indcs;
        for(int i=0;i<nums.size();i++){
            indcs[nums[i]].insert(i);
        }
        for(pair<int,set<int>> my_indcs : indcs){
            auto it=my_indcs.second.begin();
            auto s =++my_indcs.second.begin();
            while(s!= my_indcs.second.end()){
                if(abs(*s - *it)<=k)return true;
                ++it;++s;
            }
        }
        return false;
    }
};