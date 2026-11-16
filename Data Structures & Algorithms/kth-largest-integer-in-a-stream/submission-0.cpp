class KthLargest {
private:
    vector<int> stream;
    int idx;
public:
    KthLargest(int k, vector<int>& nums) {
        stream = nums;
        idx = k;
        sort(stream.begin(),stream.end());
    }
    
    int add(int val) {
        stream.push_back(val);
        int a=0;
        for(a=stream.size()-2;a>=0;a--){
            if (stream[a]>val){
                stream[a+1] = stream[a];
            } else {
                stream[a+1] = val;
                break;
            }
        }
        return stream[stream.size()-idx];
    }
};
