class Solution {
public:
    int reverse(int x) {
        int y=0,rem;
      
        while(x!=0){
            rem=x%10;
            x=x/10;
            if(y>INT_MAX/10 || y<INT_MIN/10)
            return 0;
            y=y*10+rem;

        }
        
        return y;
    }
};