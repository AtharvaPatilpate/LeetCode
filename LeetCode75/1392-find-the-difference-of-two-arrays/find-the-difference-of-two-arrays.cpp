class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        
        vector<vector<int>> answer(2);

        for (auto i : s1) {
            if (s2.find(i) == s2.end()) {
                answer[0].push_back(i);
            }
        }

        for (auto i : s2) {
            if (s1.find(i) == s1.end()) {
                answer[1].push_back(i);
            }
        }

        return answer;
    }
};