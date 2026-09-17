class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for (int a = 0; a < position.size(); a++) {
            cars.push_back({position[a], speed[a]});
        }
        sort(cars.rbegin(), cars.rend());
        stack<float> times;
        for (const auto& car : cars) {
            float time = (float)(target - car.first) / car.second;
            if (times.empty() || times.top() < time) {
                times.push(time);
            }
        }
        return times.size();
    }
};
