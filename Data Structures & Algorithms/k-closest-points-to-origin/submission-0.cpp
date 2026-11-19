class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<long,int>,vector<pair<long,int>>,std::greater<pair<long,int>>> mheap;
        vector<vector<int>> result;
        for(int a=0;a<points.size();a++){
            long distance = points[a][0]*points[a][0] + points[a][1]*points[a][1];
            mheap.push({distance,a});
        }
        for(int a=0;a<k;a++){
            result.push_back(points[mheap.top().second]);
            mheap.pop();
        }
        return result;
    }
};
