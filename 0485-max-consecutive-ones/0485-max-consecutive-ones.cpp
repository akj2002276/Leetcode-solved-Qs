class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0;
        int max = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count1++;
            }
            else{
                count1 = 0;
            }
            // count1 = max;
            if(max<count1){
                max = count1;
            }
        }

        return max;
    }
};