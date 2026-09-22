class MinStack {
   private:
    stack<long> st;
    int minV;

   public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(0);
            minV = val;
        } else {
            st.push(val - minV);
            if (val < minV) {
                minV = val;
            }
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
        if (st.top() < 0)
            return minV;
        else
            return st.top() + minV;
    }

    int getMin() { return minV; }
};
