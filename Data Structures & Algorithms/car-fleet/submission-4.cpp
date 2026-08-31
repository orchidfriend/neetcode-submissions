class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int a = 0; a < position.size(); a++) {
            cars.push_back({position[a], speed[a]});
        }
        sort(cars.begin(), cars.end(), std::greater<pair<int, int>>());
        stack<float> st;
        for (const auto& car : cars) {
            float time = (float)(target - car.first) / car.second;
            if (st.empty() || st.top() < time) {
                st.push(time);
            }
        }
        return st.size();
    }
};
