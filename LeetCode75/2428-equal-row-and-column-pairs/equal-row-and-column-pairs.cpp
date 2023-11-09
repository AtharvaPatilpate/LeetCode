class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> cols(n);

        for (auto i = 0; i < n; i++) {
            for (auto j : grid) {
                cols[i].push_back(j[i]);
            }
        }

        int ans = 0;

        map<vector<int>, int> r;

        for(auto &i: grid) r[i]++;

        for (auto it : cols) {
            ans += r[it]; 
        }

        return ans;
    }
};