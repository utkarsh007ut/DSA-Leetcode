class Solution {

public:
    void solve(vector<vector<int>>& ans,vector<int>& candidates,vector<int>& a, int target,int j){
        if(target==0){
            ans.push_back(a);
            return;
        }

        for(int i=j;i<candidates.size();i++){

            if(i > j && candidates[i] == candidates[i-1])
                continue;
            if(target>=candidates[i]){

                a.push_back(candidates[i]);
                solve(ans,candidates,a,target-candidates[i],i+1);
                a.pop_back();

            }
        }
    }
    
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> a;
        sort(candidates.begin(),candidates.end());

        solve(ans,candidates,a,target,0);

        return ans;
    }


};