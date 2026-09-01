class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> bracket = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;
        for (const auto& c : s) {
            if (c == '{' || c == '[' || c == '(') {
                st.push(c);
                continue;
            }
            if (!st.empty()) {
                if (st.top() == bracket[c]) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
