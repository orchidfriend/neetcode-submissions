class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> freq;
        for (const auto& c : s1) {
            freq[c]++;
        }
        int must = freq.size();
        int have = 0;
        int i = 0;
        unordered_map<char, int> count;
        for (int j = 0; j < s2.size(); j++) {
            if (freq.find(s2[j]) != freq.end()) {
                count[s2[j]]++;
                if (count[s2[j]] == freq[s2[j]]) {
                    have++;
                    if (have == must) {
                        return true;
                    }
                }
                while (count[s2[j]] > freq[s2[j]]) {
                    if (count[s2[i]] == freq[s2[i]]) {
                        have--;
                    }
                    count[s2[i]]--;
                    i++;
                }
            } else {
                count.clear();
                have = 0;
            }
        }
        return false;
    }
};
