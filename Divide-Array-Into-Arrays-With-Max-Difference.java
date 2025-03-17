class Solution {
    public int[][] divideArray(int[] nums, int k) {
        // Sort the array
        Arrays.sort(nums);

        int n = nums.length;
        if (n % 3 != 0) {
            return new int[0][0]; // Return an empty 2D array if size is not a multiple of 3
        }

        int rows = n / 3; // Number of rows in the result
        int[][] ans = new int[rows][3]; // Initialize the 2D array

        for (int i = 0, row = 0; i < nums.length; i += 3, row++) {
            // Check the condition
            if (nums[i + 2] - nums[i] > k) {
                return new int[0][0]; // Return empty 2D array if condition fails
            }
            // Fill the 2D array row by row
            ans[row] = new int[]{nums[i], nums[i + 1], nums[i + 2]};
        }

        return ans; // Return the filled 2D array
    }
}