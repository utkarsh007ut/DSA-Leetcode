class Solution {
public:
    vector<int> lexicalOrder(int n) {

        vector<int> num;
        /*for(int i=1;i<10;i++){
            solve(num,i,n);
        }*/

        solve(num,1,n);

        return num;
    }
public:
    void solve(vector<int>& num,int i,int n){
        if(i>n)
        return;

        num.push_back(i);

        solve(num,i*10,n);

        if(i%10!=9)
        solve(num,i+1,n);


        
    }

};