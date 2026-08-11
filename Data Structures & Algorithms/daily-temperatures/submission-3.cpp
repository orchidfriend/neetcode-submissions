class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> result(temperatures.size(), 0);
        st.push({0, temperatures[0]});
        for (int a = 1; a < temperatures.size(); a++) {
            while (!st.empty() && (st.top().second < temperatures[a])) {
                result[st.top().first] = a - st.top().first;
                st.pop();
            }
            st.push({a, temperatures[a]});
        }
        return result;
    }
};
