class Graph {
public:
    vector<vector<pair<int, int>>> adj;

    Graph(int n, vector<std::vector<int>>& edges) {
        adj.resize(n);
        for (auto edge : edges) {
            adj[edge[0]].emplace_back(edge[1], edge[2]);
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].emplace_back(edge[1], edge[2]);
    }

    int shortestPath(int node1, int node2) {
        return dijkstra(node1, node2);
    }


private:
    int dijkstra(int start, int end) {
        int n = adj.size();
        vector<int> distances(n, INT_MAX);
        distances[start] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, start});

        while (!pq.empty()) {
            int currentNode = pq.top().second;
            int currentCost = pq.top().first;
            pq.pop();

            if (currentCost > distances[currentNode])
                continue;

            if(currentNode == end)
                return currentCost ;

            for (auto edge : adj[currentNode]) {
                int neighbor = edge.first, edgeLength = edge.second;
                int newRouteCost = edgeLength + distances[currentNode];

                if (distances[neighbor] > newRouteCost) {
                    distances[neighbor] = newRouteCost;
                    pq.push({newRouteCost, neighbor});
                }
            }
        }

        return ((distances[end] == INT_MAX) ? -1 : distances[end]);
    }
};
