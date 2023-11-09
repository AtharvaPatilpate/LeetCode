class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> ch1, ch2;
        for(auto &i: word1) ch1[i]++;
        for(auto &j: word2) ch2[j]++;
        
        vector<char> v1,v2;
        vector<int> x1,x2;

        for (auto &m : ch1) {
            v1.push_back(m.first);
            x1.push_back(m.second);
        }

        for (auto &n : ch2) {
            v2.push_back(n.first);
            x2.push_back(n.second);
        }

        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        sort(begin(x1),end(x1));
        sort(begin(x2),end(x2));

        return v1 == v2 && x1 == x2;
    }
};