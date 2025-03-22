class Solution {
    public int maximumPrimeDifference(int[] nums) {
        Set<Integer> primes = new HashSet<>(Arrays.asList(2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97));
        int l=0,r=nums.length-1;
        while(l<nums.length){
            if(primes.contains(nums[l]))break;
            ++l;
        }
        while(r>0){
            if(primes.contains(nums[r]))break;
            --r;
        }
        return r-l;
    }
}