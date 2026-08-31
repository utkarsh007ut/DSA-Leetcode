class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k % n;
        //reverse whole array
        reverse(nums.begin(),nums.end());

        //reverse k elements
        reverse(nums.begin(),nums.begin()+k);

        //reverse rest of the array
        reverse(nums.begin()+k,nums.end());

    }
};