class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> mheap;
        vector<int> result;
        for (int a = 0; a < nums.size(); a++) {
            mheap.push({nums[a], a});
            if (a >= k - 1) {
                while (mheap.top().second <= (a - k)) mheap.pop();
                result.push_back(mheap.top().first);
            }
        }
        return result;
    }
};
