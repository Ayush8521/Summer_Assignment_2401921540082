class RecentCounter {
    queue<int> queue;
    
public:
    RecentCounter() {
    }
    int ping(int t) {
        queue.push(t);
        while (!queue.empty() && t - 3000 > queue.front()) {
            queue.pop();
        }
        return queue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */