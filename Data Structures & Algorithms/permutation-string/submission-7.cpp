class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1_count;
        for (int a = 0; a < s1.size(); a++) {
            s1_count[s1[a]]++;
        }
        int must = s1_count.size();
        int have = 0;
        int i = 0;
        unordered_map<char, int> s2_count;
        for (int j = 0; j < s2.size(); j++) {
            if (s1_count.find(s2[j]) != s1_count.end()) {
                s2_count[s2[j]]++;
                if (s2_count[s2[j]] == s1_count[s2[j]]) {
                    have++;
                    if (must == have) return true;
                }
                while (s2_count[s2[j]] > s1_count[s2[j]]) {
                    if (s2_count[s2[i]] == s1_count[s2[i]]) have--;
                    s2_count[s2[i]]--;
                    i++;
                }
            } else {
                s2_count.clear();
                i = j + 1;
                have = 0;
            }
        }
        return false;
    }
};
