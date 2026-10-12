class TimeMap {
   private:
    unordered_map<string, vector<pair<int, string>>> umap;

   public:
    TimeMap() {}

    void set(string key, string value, int timestamp) { umap[key].push_back({timestamp, value}); }

    string get(string key, int timestamp) {
        if (umap.find(key) == umap.end()) return "";
        auto& temp = umap[key];
        int i = 0, j = temp.size() - 1;
        int result = -1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (temp[mid].first == timestamp) {
                return temp[mid].second;
            } else if (temp[mid].first < timestamp) {
                result = mid;
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return (result == -1) ? "" : temp[result].second;
    }
};
