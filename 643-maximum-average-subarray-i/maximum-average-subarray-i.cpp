class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currAvg = 0;

        for (int i = 0; i < k; i++) {
            currAvg += nums[i];
        }

        double maxAvg = currAvg;

        for (int i = 0; i < nums.size()-k; i++) {
            currAvg -= nums[i];
            currAvg += nums[i+k];

            if (maxAvg <= currAvg) {
                maxAvg = currAvg;
            }
        }

        return maxAvg/k;
    }
};