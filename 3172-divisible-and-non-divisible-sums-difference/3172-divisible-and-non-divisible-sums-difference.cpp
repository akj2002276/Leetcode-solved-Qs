class Solution {
public:
    int differenceOfSums(int n, int m) {
        int c1 = 0; //not divisible ka count
        int c2 = 0; //divisible ka count
        for(int i = 1; i <= n; i++){
            if(i%m == 0){
                c2 = c2 + i;
            }
            else{
                c1 = c1 + i;
            }
        }
        return c1-c2;
    }
};