class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> str;
        solve(n,0,0,str,"");
        return str;
    }

    private:
    void solve(int n,int open,int close,vector<string>& str,string s){
        if(open==n && close==n){
            str.push_back(s);
        }

        if(open<n)
        solve(n,open+1,close,str,s+"(");

        if(close<open)
        solve(n,open,close+1,str,s+")");
    }
};