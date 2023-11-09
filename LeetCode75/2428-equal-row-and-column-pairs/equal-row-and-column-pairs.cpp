struct VectorHasher {
    int operator()(const vector<int> &V) const {
        int hash = V.size();
        for(auto &i : V) {
            hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
        }
        return hash;
    }
};

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

        unordered_map<vector<int>, int, VectorHasher> r;

        for(auto &i: grid) r[i]++;

        for (auto it : cols) {
            ans += r[it]; 
        }


        return ans;
    }
};