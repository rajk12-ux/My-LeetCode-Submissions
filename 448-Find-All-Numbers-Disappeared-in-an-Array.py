class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        Set<Integer> n = Arrays.stream(nums)
                         .boxed()
                         .collect(Collectors.toSet());
        List<Integer> missing=new ArrayList<Integer>();
        for(int i=1;i<=nums.length;i++){
            if(n.contains(i)==false){
                missing.add(i);
            }
        }
        return missing;
    }
}