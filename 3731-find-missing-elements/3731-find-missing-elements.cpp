#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int minx=*min_element(nums.begin(),nums.end());
        int maxx=*max_element(nums.begin(),nums.end());
        while(minx<maxx){
           if(find(nums.begin(), nums.end(), minx)!=nums.end()){

           }
           else{
            ans.push_back(minx);
           }

           minx++;
        }

        return ans;

    }
};