class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCand = *max_element(candies.begin(), candies.end());
        vector<bool> result (candies.size(), false);

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxCand) {
                result[i] = true;
            }
        } 
        return result;
    }
};