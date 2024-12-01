class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> all;
        for(int i:arr){
            if(all.find(2*i)!=all.end())return true;
            else if(i%2==0 && all.find(i/2)!=all.end())return true;
            all.insert(i);
        }
        return false;
    }
};