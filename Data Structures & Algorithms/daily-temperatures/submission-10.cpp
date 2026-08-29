class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        for (int a = temperatures.size() - 2; a >= 0; a--) {
            if (temperatures[a] < temperatures[a + 1]) {
                result[a] = 1;
            } else {
                int temp = a + 1;
                while (temperatures[a] >= temperatures[temp] && result[temp] != 0) {
                    temp += result[temp];
                }
                if (temperatures[a] < temperatures[temp]) {
                    result[a] = temp - a;
                }
            }
        }
        return result;
    }
};
