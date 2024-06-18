class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int count9 = 0;
        int n = digits.size();
        vector<int> v;
        v.push_back(1);
        for(int i = 0; i < n; i++){
            v.push_back(0);
        }        
        for(int i = n-1; i>=0; i--){
            if(digits[i] != 9){
                digits[i]++;
                break;
            }
            else{
                count9++;
                digits[i] = 0;
            }
        }
        if(count9 == n){
            return v;
        }
        else{
            return digits;
        }


    }
};