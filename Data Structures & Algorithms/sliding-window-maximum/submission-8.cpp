class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> heap;
        vector<int> res;
        for (int a = 0; a < nums.size(); a++) {
            while (!heap.empty() && heap.top().second <= a - k) {
                heap.pop();
            }
            heap.push({nums[a], a});
            if (a >= k - 1) {
                res.push_back(heap.top().first);
            }
        }
        return res;
    }
};
