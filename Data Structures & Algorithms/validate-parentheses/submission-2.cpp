class Solution {
   public:
    bool isValid(string s) {
        unordered_map<char, char> pMap = {{')', '('}, {']', '['}, {'}', '{'}};
        stack<char> st;
        for (int a = 0; a < s.size(); a++) {
            if (st.empty() && (s[a] == ')' || s[a] == ']' || s[a] == '}')) {
                return false;
            }
            if (!st.empty() && pMap[s[a]] == st.top()) {
                st.pop();
            } else {
                st.push(s[a]);
            }
        }
        return st.empty();
    }
};
