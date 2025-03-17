class Solution {
    public int maxAdjacentDistance(int[] nums) {
        int maxd=Math.abs(nums[nums.length-1]-nums[0]);
        for(int i=1;i<nums.length;i++){
            maxd=Math.max(maxd,Math.abs(nums[i]-nums[i-1]));
        }
        return maxd;
    }
}