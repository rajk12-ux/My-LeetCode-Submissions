class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr); // Sort the array
        List<List<Integer>> pairs = new ArrayList<>();
        int minAbs = Integer.MAX_VALUE;

        // Find the minimum absolute difference
        for (int i = 1; i < arr.length; i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff < minAbs) {
                pairs.clear(); // Clear the list if a new minimum is found
                minAbs = diff; // Update the minimum difference
                pairs.add(Arrays.asList(arr[i - 1], arr[i])); // Add the new pair
            } else if (diff == minAbs) {
                pairs.add(Arrays.asList(arr[i - 1], arr[i])); // Add the pair if it matches the minimum
            }
        }

        return pairs; // Return the list of pairs
    }
}