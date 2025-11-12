import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;
        List<Pair> entryIndex = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            entryIndex.add(new Pair(nums[i], i));
        }
        entryIndex.sort((a, b) -> Long.compare(a.value, b.value));
        int l = 0;
        int h = n - 1;
        while (l < h) {
            long summ = entryIndex.get(l).value + entryIndex.get(h).value;
            if (summ == target) break;
            if (summ > target) { h--; } else { l++; }
        }
        return new int[]{entryIndex.get(l).index, entryIndex.get(h).index};
    }

    private static class Pair {
        long value;
        int index;

        Pair(long value, int index) {
            this.value = value;
            this.index = index;
        }
    }
}

