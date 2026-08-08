class MinStack {
   private:
    int minVal;
    stack<long> st;

   public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            minVal = val;
            st.push(0);
        } else {
            st.push(val - minVal);
            minVal = min(minVal, val);
        }
    }

    void pop() {
        if (st.empty()) return;
        if (st.top() < 0) {
            minVal -= st.top();
        }
        st.pop();
    }

    int top() {
        if (st.top() < 0) {
            return minVal;
        } else {
            return st.top() + minVal;
        }
    }

    int getMin() { return minVal; }
};
