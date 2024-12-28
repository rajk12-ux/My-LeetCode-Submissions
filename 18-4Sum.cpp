class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            if(i!=0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n-2;j++){
                if(j!=i+1 && nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(l>k){
                    //cout<<i<<" "<<j<<" "<<k<<" "<<l<<"\n";
                    long summ=1LL*nums[i]+1LL*nums[j]+1LL*nums[k]+1LL*nums[l];
                    //cout<<summ<<"\n";
                    if(summ==target){
                        vector<int>a={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(a);
                        ++k;--l;
                        while(k!=j+1 && nums[k]==nums[k-1] && k<l)++k;
                        while(l!=n-1 && nums[l+1]==nums[l] && k<l)--l;
                    }
                    else if(summ<target)++k;
                    else --l;
                }
            }
        }
        return ans;
        }
};