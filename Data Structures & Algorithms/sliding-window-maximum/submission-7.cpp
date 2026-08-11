class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> heap;
        vector<int> result;

        for(int a=0;a<nums.size();a++){
            heap.push({nums[a],a});
            if(a>=k-1) {
                while(heap.top().second<=a-k)
                    heap.pop();
                result.push_back(heap.top().first);
            }
        }
        return result;
    }
};
