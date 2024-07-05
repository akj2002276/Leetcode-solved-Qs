class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<double> v;
        for(int i = 0; i < n/2; i++){
            v.push_back((nums[i] + nums[n-i-1]) / 2.0);
        }
        sort(v.begin(), v.end());
        set<double> ue(v.begin(),v.end());
        return ue.size();

    }
};