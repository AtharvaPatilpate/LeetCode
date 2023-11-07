class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int top = 0;
        int count1 = 0;
        int count2 = 0;

        int n = nums.size();


        for (auto i = 0; i < n; i++) {
            if(i == 0 && nums[i] == 0 || i == (n-1) && nums[i] == 0){
                continue;
            }

            if (nums[i] == 1) {
                count2++;
            }
            else if (nums[i-1] == 1 && nums[i+1] == 1){
                count1 = count2;
                count2 = 0;
            }
            else {
                count1 = 0;
                count2 = 0;
            }

            if (count1 + count2 > top) {
                top = count1 + count2;
            }
        }

        if (top == n) {
                return n-1;
        }

        return top;
    }
};