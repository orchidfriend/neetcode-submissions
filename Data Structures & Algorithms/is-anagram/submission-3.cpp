class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;
        if (s.size() != t.size()) return false;
        for (const auto& c : s) {
            freq[c]++;
        }
        for (const auto& c : t) {
            freq[c]--;
            if (freq[c] < 0) return false;
        }
        return true;
    }
};
