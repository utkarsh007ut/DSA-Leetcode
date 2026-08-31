class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();
        for(int i=0;i<=h-n;i++){
            //initializing both pointers
            int first=i,second=0;
            while(second<n){

                //checking if characters are same
                if(haystack[first]!=needle[second])
                break;

                //if yes increment the both
                else{
                first++;
                second++;}
            }

            //check if second is fully traversed
            if(second==n)
            return first-second;
        }

        return -1;
    }
};