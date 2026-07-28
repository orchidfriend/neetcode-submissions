class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        priority_queue<pair<int, int>> mheap;
        for (int a = 0; a < k; a++) mheap.push({nums[a], a});
        result.push_back(mheap.top().first);
        for (int a = k; a < nums.size(); a++) {
            mheap.push({nums[a], a});
            while (mheap.top().second <= (a - k)) mheap.pop();
            result.push_back(mheap.top().first);
        }
        return result;
    }
};
