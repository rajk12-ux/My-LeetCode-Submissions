class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        while(l<nums.size()){
            int r=l;
            while(!nums[l]){
                l++;
                if(l==nums.size())return ;
            }
            while(nums[l]){
                swap(nums[r++],nums[l++]);
                if(l==nums.size())return ;
            }
            l = r;
        }
    }
};