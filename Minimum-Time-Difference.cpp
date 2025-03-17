class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        int mind=(timePoints[timePoints.size()-1][0]-timePoints[0][0])*600+(timePoints[timePoints.size()-1][1]-timePoints[0][1])*60+(timePoints[timePoints.size()-1][3]-timePoints[0][3])*10+(timePoints[timePoints.size()-1][4]-timePoints[0][4]);
        mind=min(mind,1440-mind);
        for(int i=1;i<timePoints.size();i++){
            int d= (timePoints[i][0]-timePoints[i-1][0])*600+(timePoints[i][1]-timePoints[i-1][1])*60+(timePoints[i][3]-timePoints[i-1][3])*10+(timePoints[i][4]-timePoints[i-1][4]);
            d=min(d,1440-d);
            mind=min(mind,d);
        }
        return mind;
    }
};