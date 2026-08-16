class MinStack {
   private:
    stack<long> st;
    int minV;

   public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            minV = val;
            st.push(0);
        } else {
            st.push(val - minV);
            minV = min(minV, val);
        }
    }

    void pop() {
        if (!st.empty()) {
            if (st.top() < 0) {
                minV -= st.top();
            }
            st.pop();
        }
    }

    int top() {
        if (!st.empty()) {
            if (st.top() < 0) {
                return minV;
            } else
                return st.top() + minV;
        }
    }

    int getMin() { return minV; }
};
