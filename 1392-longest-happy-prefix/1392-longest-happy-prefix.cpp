
class Solution {
public:
    string longestPrefix(string s) {
        vector<int> lps(s.size(),0);
        int prefix=0,suffix=1;
        while(suffix<s.size()){
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++;
                suffix++;
            }
            else{
                if(prefix==0){
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];

                }
            }
        }
        string x= s.substr(0,lps[s.size()-1]);

        return x;
    }
};