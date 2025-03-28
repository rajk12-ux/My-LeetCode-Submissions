class Solution {
    public int minMaxDifference(int num) {
        // Convert the number to a character array for direct manipulation
        char[] snum_max = String.valueOf(num).toCharArray();
        char[] snum_min = String.valueOf(num).toCharArray();
        
        // Get the length of the number
        int n = snum_max.length;

        // Variables to track the first non-'9' digit and the first digit
        char firstNoneNine = snum_max[0];
        char firstNum = snum_max[0];

        // Find the first non-'9' character in the number
        for (int i = 0; i < n; i++) {
            if (snum_max[i] != '9') {
                firstNoneNine = snum_max[i];
                break; // Exit the loop as soon as we find it
            }
        }

        // Replace all occurrences of the first non-'9' character with '9' in snum_max
        for (int i = 0; i < n; i++) {
            if (snum_max[i] == firstNoneNine) {
                snum_max[i] = '9';
            }
        }

        // Replace all occurrences of the first digit with '0' in snum_min
        for (int i = 0; i < n; i++) {
            if (snum_min[i] == firstNum) {
                snum_min[i] = '0';
            }
        }

        // Compute the difference between the maximum and minimum values
        return Integer.parseInt(String.valueOf(snum_max)) - Integer.parseInt(String.valueOf(snum_min));
    }
}
