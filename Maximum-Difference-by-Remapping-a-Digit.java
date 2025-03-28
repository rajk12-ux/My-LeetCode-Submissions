class Solution {
    public int minMaxDifference(int num) {
        // Convert the number to a string
        String snum = Integer.toString(num);

        // Create copies for max and min calculations
        StringBuilder snumMax = new StringBuilder(snum);
        StringBuilder snumMin = new StringBuilder(snum);

        // Max value calculation
        int i = 0;
        if (snum.charAt(0) == '9') {
            int j = 0;
            while (j < snum.length() && snum.charAt(j) == '9') j++;
            if (j < snum.length()) {
                char toReplace = snum.charAt(j);
                for (int k = 0; k < snumMax.length(); k++) {
                    if (snumMax.charAt(k) == toReplace) {
                        snumMax.setCharAt(k, '9');
                    }
                }
            }
        } else {
            char toReplace = snum.charAt(0);
            for (int k = 0; k < snumMax.length(); k++) {
                if (snumMax.charAt(k) == toReplace) {
                    snumMax.setCharAt(k, '9');
                }
            }
        }

        // Min value calculation
        char toReplaceMin = snum.charAt(0);
        for (int k = 0; k < snumMin.length(); k++) {
            if (snumMin.charAt(k) == toReplaceMin) {
                snumMin.setCharAt(k, '0');
            }
        }

        // Debugging: Print final results
        System.out.println("snumMax = " + snumMax + ", size = " + snumMax.length());
        System.out.println("snumMin = " + snumMin + ", size = " + snumMin.length());

        // Calculate the difference
        int maxNum = Integer.parseInt(snumMax.toString());
        int minNum = Integer.parseInt(snumMin.toString());
        return maxNum - minNum;
    }
}
