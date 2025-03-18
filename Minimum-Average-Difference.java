class Solution {
    public int minimumAverageDifference(int[] nums) {
        long rsum = Arrays.stream(nums).asLongStream().sum(); // Calculate the sum
        long lsum=0;
        long t=rsum;
        int mdvag=Integer.MAX_VALUE,maxi=0;
        for(int i=1;i<nums.length;i++){
            rsum -= nums[i-1];
            lsum += nums[i-1];
            if(mdvag > Math.abs(Math.round(rsum/(nums.length-i)) - Math.round(lsum/i))){
                mdvag = Math.abs(Math.round(rsum/(nums.length-i)) - Math.round(lsum/i));
                maxi = i-1;
            }
        }
        if(t/nums.length <mdvag)return nums.length-1;
        return maxi;
    }
}