class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        int ans = 0;
        int curr = 0;
        vector<float> time(n);

        std::transform(dist.begin(), dist.begin() + n, speed.begin(), time.begin(), std::divides<float>());

        sort(time.begin(), time.end());

        for (auto i : time) {
            if (i > curr) {
                ans++;
                curr++;
            }
            else {
                break;
            }
        }

        return ans;
    }
};