class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        int high = temperatures.size() - 1;
        for (int a = temperatures.size() - 2; a >= 0; a--) {
            while (temperatures[a] >= temperatures[high] && res[high] > 0) {
                high += res[high];
            }
            if (temperatures[a] < temperatures[high]) res[a] = high - a;
            high = a;
        }
        return res;
    }
};
