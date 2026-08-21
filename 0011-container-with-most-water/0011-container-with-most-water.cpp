class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1,area;
        int left=0;
        int water=0;
        while(left<right){
            area=min(height[left],height[right]) * (right-left);

            water=max(area,water);

            if(height[left]<height[right]) left++;

            else right--;
        }

        return water;
    }
};