class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        for (int i = 0; i < temperatures.size(); i++) {
            int distance = 0;
            for (int j = i + 1; j < temperatures.size(); j++) {
                if (temperatures[j] > temperatures[i]) {
                    distance = j - i;
                    break;
                }
            }
            result.push_back(distance);
        }
        return result;
    }
};
