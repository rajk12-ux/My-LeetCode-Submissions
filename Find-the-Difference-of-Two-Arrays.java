class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        // Convert arrays to HashSets
        Set<Integer> set1 = new HashSet<>();
        for (int num : nums1) {set1.add(num);}

        Set<Integer> set2 = new HashSet<>();
        for (int num : nums2) {set2.add(num);}

        // Prepare result list
        List<List<Integer>> result = new ArrayList<>();
        result.add(new ArrayList<>()); // Elements in set1 but not in set2
        result.add(new ArrayList<>()); // Elements in set2 but not in set1

        // Find elements in set1 but not in set2
        for (int num : set1) {
            if (!set2.contains(num)) {
                result.get(0).add(num);
            }
        }

        // Find elements in set2 but not in set1
        for (int num : set2) {
            if (!set1.contains(num)) {
                result.get(1).add(num);
            }
        }

        return result;
    }
}