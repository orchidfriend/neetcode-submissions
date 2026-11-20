class Solution {
   public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> mheap;
        for (auto& num : nums) {
            mheap.push(num);
            if (mheap.size() > k) mheap.pop();
        }
        return mheap.top();
    }
};
