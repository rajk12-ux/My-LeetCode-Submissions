class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int zc=0;
        for(int i:nums){
            if(i==0)++zc;
        }
        if(zc==nums.size())return 0;
        for(int i=0;i<queries.size();i++){
            for(int j=queries[i][0];j<=queries[i][1];j++){
                if(nums[j]==0)continue;
                if(nums[j]<=queries[i][2]){
                    nums[j]=0;
                    ++zc;
                    if(zc==nums.size())return i+1;
                }
                else nums[j] -= queries[i][2];
            }
        }
        return -1;
    }
};