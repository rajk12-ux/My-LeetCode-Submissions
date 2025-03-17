class Solution {
    public int differenceOfSum(int[] nums) {
        int summ=0,dsum=0;
        for(int i:nums){
            summ += i;
            while(i>0){
                dsum += i%10;
                i /= 10;
            }
        }
        return summ -dsum;
    }
}