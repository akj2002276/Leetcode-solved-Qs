class Solution {
public:
    int singleNumber(vector<int>& nums) {

        long long res = 0;
        for(int i = 0; i < nums.size(); i++){
            res = res^nums[i];
        }
        return res;
    }
};