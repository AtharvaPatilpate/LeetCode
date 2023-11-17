class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int i, vector<int>& visited) {
        for(int j = 0; j < isConnected.size(); j++) {
            if(isConnected[i][j] == 1 && visited[j] == 0) {
                visited[j] = 1;
                dfs(isConnected, j, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> visited(n, 0);

        int ans = 0;

        for(int i = 0; i < n; i++){
            if(visited[i] == 0){
                ans++;
                dfs(isConnected, i, visited);
            }
        }

        return ans;
    }
};