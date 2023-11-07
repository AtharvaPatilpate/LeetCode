class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();

        int l = 0;
        int r = sum - nums[0];

        for (auto i = 0; i < n-1; i++) {
            if (l == r) {
                return i;
            }

            l += nums[i];
            r -= nums[i+1];
        }
        
        if (sum - nums[n-1] == 0) {
            return n-1;
        }

        return -1;
    }
};