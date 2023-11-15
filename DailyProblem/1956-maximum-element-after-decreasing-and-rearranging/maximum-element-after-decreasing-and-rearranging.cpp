class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int curr = 0;
        arr[0] = 1;

        for (auto i = 0; i < arr.size(); i++) {
            if (arr[i] > curr + 1) {
                arr[i] = curr + 1;
            }
            curr = arr[i];
        }
        return curr;
    }
};