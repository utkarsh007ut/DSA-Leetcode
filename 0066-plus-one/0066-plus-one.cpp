class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n = digits.size();
    
    
    for (int i = n - 1; i >= 0; i--) {
        //check if smaller than 9
        if (digits[i] < 9) {
            digits[i]++;   
            return digits;
        }

        //if it is 9 then make it zero
        digits[i] = 0;    
    }
    
    //it all are 9 then add 1 to starting
    digits.insert(digits.begin(), 1);
    return digits;
        
    }
};