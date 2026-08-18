class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> res(temperatures.size(), 0);
        for (int a = 0; a < temperatures.size(); a++) {
            while (!st.empty() && st.top().first < temperatures[a]) {
                res[st.top().second] = a - st.top().second;
                st.pop();
            }
            st.push({temperatures[a], a});
        }
        return res;
    }
};
