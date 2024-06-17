class Solution {
public:
    bool isPerfectSquare(int num) {
        double d = sqrt(num);
        if(d == (int)d){
            return true;
        }
        else{
            return false;
        }
    }
};