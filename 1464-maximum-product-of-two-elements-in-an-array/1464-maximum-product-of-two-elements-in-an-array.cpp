class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 0, j = 1, k;

        if (nums[j] > nums[i])
            swap(i, j);

        for (k = 2; k < nums.size(); k++) {
            if (nums[k] >= nums[i]) {
                j = i;
                i = k;
            }
            else if (nums[k] > nums[j]) {
                j = k;
            }
        }

        return (nums[i] - 1) * (nums[j] - 1);
    }
};