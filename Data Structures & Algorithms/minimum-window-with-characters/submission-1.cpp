class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> t_count;
        for (const auto& ct : t) {
            t_count[ct]++;
        }
        int i = 0;
        int must = t_count.size();
        int have = 0;
        int minLen = s.size() + 1;
        unordered_map<char, int> s_count;
        string result;
        for (int j = 0; j < s.size(); j++) {
            if (t_count.find(s[j]) != t_count.end()) {
                s_count[s[j]]++;
                if (s_count[s[j]] == t_count[s[j]]) {
                    have++;
                }
            }
            while (have == must) {
                int len = j - i + 1;
                if (len < minLen) {
                    result = s.substr(i, len);
                    minLen = len;
                }
                if (t_count.find(s[i]) != t_count.end()) {
                    if (s_count[s[i]] == t_count[s[i]]) have--;
                    s_count[s[i]]--;
                }
                i++;
            }
        }
        return result;
    }
};
