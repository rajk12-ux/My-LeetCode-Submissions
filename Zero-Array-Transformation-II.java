class Solution {
    public int minZeroArray(int[] nums, int[][] queries) {
        int[] diff = new int[nums.length + 1]; // Difference array
        int curr = 0, summ = 0; // Zero till index and sum reached
        for (int i = 0; i < nums.length; i++) {
            while (summ + diff[i] < nums[i]) {
                if (curr == queries.length) return -1; // Reached query end
                
                int l = Math.max(queries[curr][0], i);
                int r = queries[curr][1];
                int mar = queries[curr][2];
                curr++;
                
                if (r < i) continue;
                
                diff[l] += mar;
                if (r + 1 < diff.length) {
                    diff[r + 1] -= mar;
                }
            }
            summ += diff[i];
        }
        return curr;
    }
}