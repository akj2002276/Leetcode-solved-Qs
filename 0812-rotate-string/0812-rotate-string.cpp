class Solution {
public:
    bool rotateString(string s, string goal) {
        //by concatinating string 
        if(s.length() != goal.length()){
            return false;
        }
        string res = goal + goal;

        return res.find(s) != string::npos;

    }
};