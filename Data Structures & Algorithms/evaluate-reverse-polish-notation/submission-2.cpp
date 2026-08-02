class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> arith = {"+", "-", "*", "/"};
        int result = 0;
        stack<int> st;
        for (const auto& t : tokens) {
            if (!arith.count(t)) {
                st.push(stoi(t));
            } else {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                int temp = 0;
                if (t == "+") {
                    temp = first + second;
                } else if (t == "-") {
                    temp = first - second;
                } else if (t == "*") {
                    temp = first * second;
                } else if (t == "/") {
                    temp = first / second;
                }
                st.push(temp);
            }
        }
        return st.top();
    }
};
