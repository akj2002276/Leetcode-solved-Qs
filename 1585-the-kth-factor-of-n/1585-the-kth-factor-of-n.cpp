class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                v.push_back(i);
            }
        }
        // return v.size();
        for(int i = 0; i < v.size(); i++){
            if(i + 1 == k){
                return v[i];

            }
        }
        return -1;
        // int ans = 0;
        // if(v.size() >= k){
        //     // return v[k];
        //     for(int i = 0; i < v.size(); i++){
        //         if(i == k){
        //             // return v[i];
        //             ans = v[i];
        //             // return v[i];
        //         }
        //     }
        // }
        // if(ans != 0){
        //     return ans;
        // }
        // else{
        //     return -1;
        // }
    }
};