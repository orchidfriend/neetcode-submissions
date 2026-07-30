class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (int a = 0; a < s.size(); a++) {
            if (((s[a] == ']') || (s[a] == ')') || (s[a] == '}')) && (st.size() == 0)) return false;
            if ((s[a] == '[') || (s[a] == '(') || (s[a] == '{'))
                st.push(s[a]);
            else if (s[a] == ']'){
                if (st.top() == '[')
                    st.pop();
                else return false;
            }else if (s[a] == ')'){
                if (st.top() == '(')
                    st.pop();
                else return false;
            }else if (s[a] == '}'){
                if (st.top() == '{')
                    st.pop();
                else return false;
            } else {
                st.push(s[a]);
            }
        }
        if (st.size()) return false;
        return true;
    }
};
