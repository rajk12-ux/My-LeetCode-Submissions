class Solution {
    public int thirdMax(int[] nums) {
        TreeSet<Integer> st = new TreeSet<>();
        for(int x : nums) {
            st.add(x);

            if(st.size() > 3)
                st.pollFirst();
        }

        if(st.size() < 3) return st.last();

        return st.first();
    }
}