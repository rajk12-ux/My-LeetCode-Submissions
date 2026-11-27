class Solution {
public:
    vector<int> constructRectangle(int area) {
        int root=(int)sqrt(area);
        while(root>1){
            if(area%root==0){
                return {area/root,root};
            }
            --root;
        }
        return {area,1};
    }
};