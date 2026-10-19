class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        int l = 0, r = nums.length - 1, f = 0;
        while (l < r) {
            f = (l + r) / 2;
            if (nums[f] >= target) r = f;
            else l = f + 1;
        }
        f = l;
        List<Integer> ans=new ArrayList<Integer>();
        while (f < (int)nums.length && nums[f] == target) {
            ans.add(f++);
        }
        return ans;
    }
}