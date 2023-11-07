class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        int top = 0;

        for (auto i : gain) {
            alt += i;
            top = max(alt, top);
        }

        return top;
    }
};