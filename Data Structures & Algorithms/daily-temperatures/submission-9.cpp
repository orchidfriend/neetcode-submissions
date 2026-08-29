class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> st;
        for (int a = 0; a < temperatures.size(); a++) {
            while (!st.empty() && st.top().first < temperatures[a]) {
                result[st.top().second] = a - st.top().second;
                st.pop();
            }
            st.push({temperatures[a], a});
        }
        return result;
    }
};
