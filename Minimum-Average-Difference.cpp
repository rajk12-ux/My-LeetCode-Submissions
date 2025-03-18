class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ans=nums.size()-1;
        long rsum=accumulate(nums.begin(),nums.end(),0ll),lsum=0;
        long t=rsum;
        int mdvag=INT_MAX,maxi=0;
        for(int i=1;i<nums.size();i++){
            rsum -= nums[i-1];
            lsum += nums[i-1];
            if(mdvag > abs(round(rsum/(nums.size()-i)) - round(lsum/i))){
                mdvag = abs(round(rsum/(nums.size()-i)) - round(lsum/i));
                maxi = i-1;
            }
        }
        if(t/nums.size() <mdvag)return nums.size()-1;
        return maxi;
    }
};