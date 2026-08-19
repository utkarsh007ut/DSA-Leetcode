class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i,j;
        int max;
        for ( i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){

                break;
            }
        }

        if(i==0){
            sort(nums.begin(), nums.end());
            return;
        }
     

        for ( j=nums.size()-1;j>0;j--){

            if(nums[j]>nums[i-1])
            break;

        }

        

        swap(nums[i-1],nums[j]);
        sort(nums.begin()+i, nums.end());
        
    }
};