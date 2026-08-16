class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n>0){
            int y=n%10;
            p*=y;
            s+=y;
            n/=10;
        }

        return p-s;
    }
};