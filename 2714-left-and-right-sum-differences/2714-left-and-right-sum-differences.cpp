class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v;
        // int left = 0;
        int ts = 0;
        for(int i = 0; i < nums.size(); i++){
            ts = ts + nums[i];
        }
        int left = 0;
        
        for(int i = 0; i < nums.size(); i++){
            ts = ts - nums[i];
            v.push_back(abs(left-ts));
            left = left + nums[i];
            // right = right - nums[i];
        }
        return v;
    }
};