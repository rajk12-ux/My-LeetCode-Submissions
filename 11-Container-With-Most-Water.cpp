class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxa=0;
        while(l < r){
            maxa=max(maxa,min(height[l],height[r])*(r-l)/*area= height x width */);
            // we want the greater height to remain hence we shift the other height.
            //the is algo automatically selects to have the greatest width since we start from the extreme ends and we try to hold on to greater height.
            if(height[l] < height[r]) l++;
            else if(height[l] > height[r]) r--;
            else {
                l++;
                r--;
            }
        }
        return maxa;
    }
};