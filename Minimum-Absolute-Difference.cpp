class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> pairs={{arr[0],arr[1]}};
        int minabs=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i] - arr[i-1] < minabs ){
                pairs.clear();
                minabs=arr[i] - arr[i-1];
                pairs.push_back({arr[i-1],arr[i]});
            }
            else if (arr[i] - arr[i-1] ==minabs)pairs.push_back({arr[i-1],arr[i]});
        }
        return pairs;
    }
};