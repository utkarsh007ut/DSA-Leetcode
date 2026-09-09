class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> str;
        solve(n,0,0,str,"");
        return str;
    }

    private:
     void solve(int n,int o,int c,vector<string>& str,string s){
        if(o==n && c==n){
            str.push_back(s);
        }

        if(o<n)
        solve(n,o+1,c,str,s+"(");

        if(c<o)
        solve(n,o,c+1,str,s+")");
    }
};