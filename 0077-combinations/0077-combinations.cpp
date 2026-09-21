class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> a;
        vector<vector<int>> ans;

        solve(ans,a,n,k,0);

        return ans;
    }

public:
    void solve( vector<vector<int>>& ans, vector<int>& a,int n, int k,int j){
        if(a.size()==k){
            ans.push_back(a);
            return;
        }
    for(int i=j+1;i<=n;i++){
        a.push_back(i);

        solve(ans,a,n,k,i);

        a.pop_back();

    }
    }
};