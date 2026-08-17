class Solution(object):
    def maxArea(self, height):
        right=len(height)-1
        left=0
        maxwater=0
        while left<right:
            width=right-left
            minheight=min(height[left],height[right])
            area=width*minheight
            maxwater=max(maxwater,area)
            
            if height[left]<height[right]:
                left+=1
            else:
                right-=1
        
        return maxwater
        

        """
        :type height: List[int]
        :rtype: int
        """
        