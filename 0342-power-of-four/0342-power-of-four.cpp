
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        return log(n)/log(4) == int(log(n)/log(4));

    }
};