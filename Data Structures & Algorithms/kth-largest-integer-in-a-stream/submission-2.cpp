class KthLargest {
private:
    priority_queue<int, vector<int>, std::greater<int>> heap;
    int max_size;
public:
    KthLargest(int k, vector<int>& nums) {
        for(auto& num:nums){
            heap.push(num);
        }
        max_size = k;
    }
    
    int add(int val) {
        heap.push(val);
        while(heap.size()>max_size){
            heap.pop();
        }
        return heap.top();
    }
};
