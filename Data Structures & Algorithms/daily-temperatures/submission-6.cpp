class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        int high = temperatures.size() - 1;
        for (int a = temperatures.size() - 2; a >= 0; a--) {
            while (temperatures[high] <= temperatures[a] && (result[high] != 0)) {
                high += result[high];
            }
            if (temperatures[high] > temperatures[a]) {
                result[a] = high - a;
            }
            high = a;
        }
        return result;
    }
};
