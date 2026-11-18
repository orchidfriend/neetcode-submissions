class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for (auto& stone : stones) {
            heap.push(stone);
        }
        while (heap.size() > 1) {
            int first = heap.top();
            heap.pop();
            int second = heap.top();
            heap.pop();
            int temp = abs(first - second);
            if (temp) heap.push(temp);
        }
        return heap.size() ? heap.top() : 0;
    }
};
