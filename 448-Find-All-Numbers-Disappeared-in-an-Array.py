class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> n(nums.begin(),nums.end());
        vector<int> missing;
        for(int i=1;i<=nums.size();i++){
            if(n.find(i)==n.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};