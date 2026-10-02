class TimeMap {
   private:
    unordered_map<string, vector<pair<int, string>>> umap;

   public:
    TimeMap() {}

    void set(string key, string value, int timestamp) { umap[key].push_back({timestamp, value}); }

    string get(string key, int timestamp) {
        if (umap.find(key) == umap.end()) return "";
        auto& target = umap[key];
        int i = 0, j = target.size() - 1;
        int result=-1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (target[mid].first == timestamp)
                return target[mid].second;
            else if (target[mid].first > timestamp) {
                j = mid - 1;
            } else {
                result = mid;
                i = mid + 1;
            }
        }
        return (result == -1) ? "" : target[result].second;
    }
};
