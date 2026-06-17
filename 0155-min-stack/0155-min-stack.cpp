class MinStack {
private:
    stack<long long> st;
    long long mini;

public:
    MinStack() {}
    void push(int val) {
        long long x = val;
        if (st.empty()) {
            st.push(x);
            mini = x;
        } else if (x >= mini) {
            st.push(x);
        } else {
            st.push(2LL * x - mini);
            mini = x;
        }
    }
    void pop() {
        if (st.empty()) return;
        long long x = st.top();
        st.pop();

        if (x < mini) {
            mini = 2LL * mini - x;
        }
    }

    int top() {
        long long x = st.top();
        if (x < mini) return (int)mini;
        return (int)x;
    }
    int getMin() {
        return (int)mini;
    }
};
