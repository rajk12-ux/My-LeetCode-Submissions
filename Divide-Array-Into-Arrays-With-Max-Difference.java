class Solution {
    public int[][] divideArray(int[] nums, int k) {
        int maxx = 0;
        for (int num : nums) {
            maxx = Math.max(maxx,num);
        }
        int[] freq = new int[maxx+1];
        for (int num : nums) {
            freq[num]++;
        }
        int n = nums.length;
        int[][] ans = new int[n/3][3];
        int ind = 0;
        for (int i = 0; i < n/3; i++) {
            for (int j = 0; j < 3; j++) {
                while (freq[ind] == 0) ind++;
                ans[i][j] = ind;
                --freq[ind];
            }
            if (ans[i][2]-ans[i][0] > k) return new int[][]{};
        }
        return ans;
    }
}