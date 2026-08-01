class MinStack {
   private:
    stack<int> q;
    int num;
    stack<int> mininum;

   public:
    MinStack() { num = 0; }

    void push(int val) {
        if (!q.size()) {
            mininum.push(val);
        } else {
            mininum.push(min(mininum.top(), val));
        }
        q.push(val);
        // num++;
    }

    void pop() {
        q.pop();
        mininum.pop();
    }

    int top() { return q.top(); }

    int getMin() { return mininum.top(); }
};
