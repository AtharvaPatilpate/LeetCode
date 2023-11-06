class Solution {
public:
    bool isSubsequence(string s, string t) {

        if (s == ""){
            return true;
        }

        int n = s.length();

        int curr = 0;

        for (auto i : t) {
            if (i == s[curr]) {
                ++curr;

                if (curr >= n) {
                    return true;
                }
            }
        }

        return false;
    }
};