class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<double> s;
        for(int i = 0; i < n/2; i++){
            double d = ((nums[i] + nums[n-i-1]) / 2.0);
            s.insert(d);

        }
        return s.size();

    }
};