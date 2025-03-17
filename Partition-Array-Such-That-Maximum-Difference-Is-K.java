class Solution {
    public int partitionArray(int[] nums, int k) {
        Arrays.sort(nums);
        ArrayList<Integer> curr = new ArrayList<>();
        int r=0,ans=0;
        while(r<nums.length){
            curr.add(nums[r++]);
            if(curr.get(curr.size()-1) -curr.get(0) >k){
                ++ans;
                curr.clear();
                --r;
            }
        }
        return ans+1;
    }
}