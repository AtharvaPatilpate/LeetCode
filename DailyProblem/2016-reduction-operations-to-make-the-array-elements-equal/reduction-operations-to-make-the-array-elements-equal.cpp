class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        int n = nums.size();

        for (int i = 0; i < n-1; i++) {
            if (nums[i] != nums[i+1]) {
                ans += (i + 1);
            }
        }

        return ans; 
    }
};