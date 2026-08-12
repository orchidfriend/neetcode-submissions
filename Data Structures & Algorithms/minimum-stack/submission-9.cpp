class MinStack {
   private:
    stack<long> st;
    int mVal;

   public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(0);
            mVal = val;
        } else {
            st.push(val - mVal);
            mVal = min(val, mVal);
        }
    }

    void pop() {
        if (!st.empty()) {
            if (st.top() <= 0) {
                mVal -= st.top();
            }
            st.pop();
        }
    }

    int top() {
        if (st.top() < 0)
            return mVal;
        else
            return st.top() + mVal;
    }

    int getMin() { return mVal; }
};
