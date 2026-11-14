class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<31> xb(x);
        bitset<31> yb(y);
        int count=0;
        for(int i=0;i<31;i++){
            if(xb[i]!=yb[i])++count;
        }
        return count;
    }
};