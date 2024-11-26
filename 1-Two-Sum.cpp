class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<long long ,int>> entryindex;
        for(int i=0;i<n;i++){
            entryindex.push_back({nums[i],i});
        }
        sort(entryindex.begin(),entryindex.end());
        int l=0;
        int h=n-1;
        while(l<h){
            int summ=entryindex[l].first+entryindex[h].first;
            if(summ==target)break;
            summ>target?--h:++l;
        } 
        return {entryindex[l].second,entryindex[h].second};
    }
};