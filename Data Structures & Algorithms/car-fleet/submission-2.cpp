class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        stack<float> fleet;
        for (int a = 0; a < position.size(); a++) {
            cars.push_back({position[a], speed[a]});
        }
        sort(cars.begin(), cars.end(), std::greater<pair<int, int>>());
        for (int a = 0; a < position.size(); a++) {
            float time = (float)(target - cars[a].first) / cars[a].second;
            if (fleet.empty())
                fleet.push(time);
            else if ( fleet.top() < time) 
                fleet.push(time);
        }
        return fleet.size();
    }
};
