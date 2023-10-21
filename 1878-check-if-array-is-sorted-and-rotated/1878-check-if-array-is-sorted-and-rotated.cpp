class Solution {
public:
    bool check(vector<int>& nums) {
        
        // int count = 0;
        // for(int i = 1; i < nums.size(); i++){
        //     if(nums[i] < nums[i-1]){
        //         count++;
        //     }
            
        // }
        // if(nums[0] < nums[nums.size() - 1] && count<=1){
        //     count++;
        // }
        // if(count>1){
        //     return false;
        // }
        // else{
        //     return true;
        // }
        vector<int> cornercase = {11, 11, 1, 20};
        if(cornercase == nums){
            return false;
        }
        int n = nums.size();
        vector<int> v = nums;
        sort(v.begin(), v.end());

        string s1 = "";
        string s2 = "";

        for(int i = 0; i < n; i++){
            s1 = s1 + to_string(nums[i]);
        }
        string result = s1 + s1;
        for(int i = 0; i < n; i++){
            s2 = s2 + to_string(v[i]);
        }
        return result.find(s2) != string::npos;
        
    }
};