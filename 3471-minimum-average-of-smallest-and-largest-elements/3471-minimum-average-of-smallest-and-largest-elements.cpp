class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = 0; i < n/2; i++){
            // double d = 
            v.push_back((nums[i] + nums[n-i-1]) / 2.0);
        }
        sort(v.begin(), v.end());
        return v[0];
    }
};