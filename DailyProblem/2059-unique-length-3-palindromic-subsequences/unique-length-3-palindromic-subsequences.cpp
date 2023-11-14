class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;

        unordered_map<char, int> first;
        unordered_map<char, int> last;
        unordered_map<char, int> freq;


        for (auto i = 0; i < s.length(); i++) {
            freq[s[i]]++;
            last[s[i]] = i;
            if (!first.count(s[i])) {
                first[s[i]] = i;
            }
        }

        for (auto &[ch, f] : freq) {
            if (f  >= 2) {
                int left = first[ch], right = last[ch];

                unordered_set<char> temp;

                for (auto i = left + 1; i < right; i++) {
                    temp.insert(s[i]);
                }

                ans += temp.size();
            }
        }

        return ans;
    }
};