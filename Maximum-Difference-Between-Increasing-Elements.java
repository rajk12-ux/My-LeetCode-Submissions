class Solution {
    public int maximumDifference(int[] nums) {
        int minn=nums[0];
        int minn_d=-1;
        for(int i=1;i<nums.length;i++){
            if(nums[i]>minn){
                minn_d=Math.max(minn_d,nums[i]-minn);
            }
            else minn=nums[i];
        }
        return minn_d;
    }
}