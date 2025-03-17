class Solution {
    public int findMinDifference(List<String> timePoints) {
        Collections.sort(timePoints);
        int minDiff = calculateDifference(timePoints.get(timePoints.size() - 1), timePoints.get(0));
        minDiff = Math.min(minDiff, 1440 - minDiff);

        for (int i = 1; i < timePoints.size(); i++) {
            int diff = calculateDifference(timePoints.get(i), timePoints.get(i - 1));
            diff = Math.min(diff, 1440 - diff);
            minDiff = Math.min(minDiff, diff);
        }
        
        return minDiff;
    }

    private int calculateDifference(String time1, String time2) {
        int hourDiff = (time1.charAt(0) - time2.charAt(0)) * 600 
                     + (time1.charAt(1) - time2.charAt(1)) * 60;
        int minDiff = (time1.charAt(3) - time2.charAt(3)) * 10 
                     + (time1.charAt(4) - time2.charAt(4));
        return hourDiff + minDiff;
    }
}