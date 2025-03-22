class Solution {
    public int maximumPrimeDifference(int[] nums) {
        Set<Integer> primes = new HashSet<>(Arrays.asList(2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97));
        int first = -1, second = -1;
        int i = 0;

        // Find the first index of a prime number
        for (; i < nums.length; i++) {
            if (primes.contains(nums[i])) {
                first = i;
                break;
            }
        }
        // Continue searching for the last index of a prime number
        i++;
        for (; i < nums.length; i++) {
            if (primes.contains(nums[i])) {
                second = i;
            }
        }
        // If no second prime number is found, return 0
        if (second == -1) {
            return 0;
        }
        // Return the difference between the indices
        return second - first;
    }
}