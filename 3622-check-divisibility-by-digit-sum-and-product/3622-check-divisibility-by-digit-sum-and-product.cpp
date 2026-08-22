class Solution {
public:
    bool checkDivisibility(int n) {
    int s=0,m=1,t=0;
    int l=n;
    while(n>0){
        s+=n%10;
        m*=n%10;
        n/=10;}
    
    t+=(s+m); 
    
    return (l%t==0);
    }
};