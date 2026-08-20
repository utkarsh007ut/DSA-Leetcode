
class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(" \t\n\r") + 1);
        int c=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ')
            break;

            c++;
        }

        return c;
    }
};