class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int l=0,r=0;
        map<int,int> now;
        long long total=0;
        do{
            ++now[nums[r]];
            while(l<r && abs(now.begin()->first - now.rbegin()->first)>2){
                --now[nums[l]];
                if(now[nums[l]]==0)now.erase(nums[l]);
                ++l;
            }
            total+=(r-l)+1;
        }while(++r<nums.size());
        return total;
    }
};
auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();