class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {

        if (source == target) {
            return 0;
        }

        int last = -1;

        for (auto i : routes) {
            for (auto j : i) {
                last = max(last, j);
            }
        }

        if (last < target) {
            return -1;
        }

        int n = routes.size();

        vector<int> cost(last + 1, n + 1);

        bool flag = true;

        cost[source] = 0;

        while (flag) {
            flag = false;

            for (auto r : routes) {
                int minval = n + 1;

                for (int i : r) {
                    minval = min(minval, cost[i]);
                }

                minval++;

                for (auto i : r) {
                    if (cost[i] > minval) {
                        cost[i] = minval;
                        flag = true;
                    }
                }
            }
        }

        return (cost[target] < n + 1 ? cost[target] : -1);
    }
};