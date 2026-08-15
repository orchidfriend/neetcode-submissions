class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(const auto& token:tokens) {
            if (token=="+") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first+second);
            } else if (token=="-") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first-second);
            } else if (token=="*") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first*second);
            } else if (token=="/") {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                st.push(first/second);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
