class RecentCounter {
public:
    queue<int> rq;

    RecentCounter() {
        rq = {};
    }
    
    int ping(int t) {
        rq.push(t);

        while (rq.front() < (t-3000)) {
            rq.pop();
        }

        return rq.size();       
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */