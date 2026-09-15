class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for (const auto& c : t) freq[c]++;
        int must = freq.size();
        int have = 0;
        int i = 0;
        int minWin = s.size() + 1;
        pair<int, int> res;
        unordered_map<char, int> count;
        for (int j = 0; j < s.size(); j++) {
            if (freq.find(s[j]) != freq.end()) {
                count[s[j]]++;
                if (count[s[j]] == freq[s[j]]) {
                    have++;
                }
            }
            while (have == must) {
                int leng = j - i + 1;
                if (minWin > leng) {
                    res = {i, leng};
                    minWin = leng;
                }
                if (freq.find(s[i]) != freq.end()) {
                    if (count[s[i]] == freq[s[i]]) have--;
                    count[s[i]]--;
                }
                i++;
            }
        }
        return s.substr(res.first, res.second);
    }
};
