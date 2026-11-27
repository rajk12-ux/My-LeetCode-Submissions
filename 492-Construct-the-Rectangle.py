class Solution(object):
    def constructRectangle(self, area):
        root=int(sqrt(area))
        while root>1:
            if area%root==0 :
                return [area/root,root]
            
            root-=1
        
        return [area,1]
        