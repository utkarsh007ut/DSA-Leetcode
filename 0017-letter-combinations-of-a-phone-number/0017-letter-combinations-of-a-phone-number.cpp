class Solution {

    vector<string> arr={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        solve(digits,ans,"");

        return ans;
    }

public:
    void solve(string digits,vector<string>& ans,string s){

        if(digits.size()==0){
            ans.push_back(s);
            return;
        }

        char ch=digits[0];
        string key=arr[ch-'0'];

        for(int i=0;i<key.size();i++){
            solve(digits.substr(1),ans,s+key[i]);
        }

    }

};