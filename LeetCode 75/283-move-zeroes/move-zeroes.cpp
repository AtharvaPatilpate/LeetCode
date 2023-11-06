class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;

        for (auto i = 0; i < nums.size(); i++) {
            for (auto i = nums.begin(); i != nums.end(); ++i) {
                if (*i == 0) {
                    nums.erase(i);
                    zeroCount++;
                    i--;
                }
            }
        }

        for (auto j = 0; j < zeroCount; j++) {
            nums.push_back(0);
        }
    }
};