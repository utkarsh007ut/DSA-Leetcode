class Solution {
public:
    int trap(vector<int>& height) {
        int mleft=0,mright=0,water=0,mheight=height[0],index=0;
        for(int i=0;i<height.size();i++){
            if(mheight<height[i])
            {
                mheight=height[i];
                index=i;
            }
        }
        for(int i=0;i<index;i++){
            if(mleft>height[i]){
                water+=mleft-height[i];
            }
            else
            mleft=height[i];
        }
        for(int i=height.size()-1;i>index;i--){
            if(mright>height[i]){
                water+=mright-height[i];
            }
            else
            mright=height[i];
        }
        return water;
    }
};