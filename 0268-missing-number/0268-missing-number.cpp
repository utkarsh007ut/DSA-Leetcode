class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long n=nums.size();
        long sum=(n*(n+1))/2;
        long x=0;
        for(int i=0;i<n;i++){
            x+=nums[i];
        }

        return (sum-x);
    }
};