class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        bool flag = 0;
        int count = 0;
        for (int i : nums) {
            if (i != 0) {
                prod *= i;
            }
            else {
                flag = 1;
                count++;
                if (count > 1) {
                    for (int i : nums) {
                        vector<int> ans(nums.size(), 0);

                        return ans;
                    }
                }
            }
        }

        

        vector<int> answer;
        for (int i : nums) {
            if (flag == 0) {
                answer.push_back(prod/i);
            }
            else {
                if (i == 0) {
                    answer.push_back(prod);
                }
                else {
                    answer.push_back(0);
                }
            }
        }

        return answer;
    }
};