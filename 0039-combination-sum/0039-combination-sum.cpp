class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;

        solve(ans,candidates,a,target,0);

        return ans;
    }

public:
    void solve(vector<vector<int>>& ans,vector<int>& candidates,vector<int>& a, int target,int j){
        if(target==0){
            ans.push_back(a);
            return;
        }

        for(int i=j;i<candidates.size();i++){
            if(target>=candidates[i]){

                a.push_back(candidates[i]);
                solve(ans,candidates,a,target-candidates[i],i);
                a.pop_back();

            }
        }
    }
};