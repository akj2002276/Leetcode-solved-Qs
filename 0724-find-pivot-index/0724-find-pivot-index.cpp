class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
        
        int lsum = 0;
        int tsum = 0;
        for(int i = 0; i < nums.size(); i++){
            tsum = tsum + nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            tsum = tsum - nums[i];
            if(lsum == tsum){
                return i;   
            }
            lsum = lsum + nums[i];
        }
        
        return -1;
        
    }
};