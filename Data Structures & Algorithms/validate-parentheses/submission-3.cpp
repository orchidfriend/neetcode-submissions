class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> para = {{']', '['}, {'}', '{'}, {')', '('}};
        for (const auto& c : s) {
            if (para.find(c) == para.end()) {
                st.push(c);
            } else {
                if (!st.empty() && st.top() == para[c]) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
