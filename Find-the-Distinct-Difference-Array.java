class Solution {
    public int[] distinctDifferenceArray(int[] nums) {
        int[] dis = new int[nums.length];
        Map<Integer, Integer> prefix = new HashMap<>();
        Map<Integer, Integer> suffix = new HashMap<>();

        // Initialize the suffix map with frequencies
        for (int num : nums) {
            suffix.put(num, suffix.getOrDefault(num, 0) + 1);
        }

        // Iterate through the nums array
        for (int i = 0; i < nums.length; i++) {
            // Increment the count in the prefix map
            prefix.put(nums[i], prefix.getOrDefault(nums[i], 0) + 1);

            // Decrement the count in the suffix map
            suffix.put(nums[i], suffix.get(nums[i]) - 1);
            if (suffix.get(nums[i]) == 0) {
                suffix.remove(nums[i]); // Remove the entry if the count becomes zero
            }

            // Add the difference of sizes to the result array
            dis[i] = prefix.size() - suffix.size();
        }

        return dis;
    }
}