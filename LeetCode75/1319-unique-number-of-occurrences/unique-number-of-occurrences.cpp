class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s(arr.begin(), arr.end());
        map<int, int> m;
        int n = 0;

        for (auto i : s) {
            n = count(arr.begin(), arr.end(), i);

            if (m.find(n) == m.end()) {
                m[n] = 1;
            }
 
            else {
                m[n]++;
            }
        }

        for (auto it : m) {

            if (it.second > 1) {
                return false;
            }

        }

        return true;
    }
};