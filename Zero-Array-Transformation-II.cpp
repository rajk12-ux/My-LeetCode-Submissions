class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff((int)nums.size()+1,0);
        int curr=0,summ=0;//zero till index and sum reached 
        for(int i=0;i<nums.size();i++){
            while(summ+diff[i] < nums[i]){
                if(curr == queries.size())return -1;//reached query end
                int l=max(queries[curr][0],i);
                int r=queries[curr][1];
                int mar=queries[curr][2];
                ++curr;
                if(r < i)continue;
                diff[l] += mar;
                diff[r+1] -= mar;
            }
            summ += diff[i];
        }
        return curr;
    }
};