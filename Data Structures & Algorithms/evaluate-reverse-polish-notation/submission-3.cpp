class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operand = {"+", "-", "*", "/"};
        stack<string> st;
        for (int a = 0; a < tokens.size(); a++) {
            if (operand.find(tokens[a]) != operand.end()) {
                int temp2 = stoi(st.top());
                st.pop();
                int temp1 = stoi(st.top());
                st.pop();
                int temp;
                if (tokens[a] == "+") {
                    temp = temp1 + temp2;
                } else if (tokens[a] == "-") {
                    temp = (temp1 - temp2);
                } else if (tokens[a] == "*") {
                    temp = (temp1 * temp2);
                } else if (tokens[a] == "/") {
                    temp = (temp1 / temp2);
                }
                st.push(to_string(temp));
            } else {
                st.push(tokens[a]);
            }
        }
        return stoi(st.top());
    }
};
