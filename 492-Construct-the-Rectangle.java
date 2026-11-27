class Solution {
    public int[] constructRectangle(int area) {
        int root=(int)Math.sqrt(area);
        while(root>1){
            if(area%root==0){
                return new int[]{area/root,root};
            }
            --root;
        }
        return new int[]{area,1};
    }
}