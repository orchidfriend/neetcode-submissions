class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> temp;
        vector<int> days(temperatures.size(), 0);
        for (int a = 0; a < temperatures.size(); a++) {
            while (temp.size() && temp.top().first < temperatures[a]) {
                days[temp.top().second] = a - temp.top().second;
                temp.pop();
            }
            temp.push({temperatures[a], a});
        }
        return days;
    }
};
