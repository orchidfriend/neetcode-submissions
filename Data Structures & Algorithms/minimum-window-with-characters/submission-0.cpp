class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for (int a = 0; a < t.size(); a++) {
            freq[t[a]]++;
        }
        int must = freq.size();
        int have = 0;
        int i = 0;
        unordered_map<char, int> count;
        string res = "";
        int minLen = s.size() + 1;
        for (int j = 0; j < s.size(); j++) {
            if (freq.find(s[j]) != freq.end()) {
                count[s[j]]++;
                if (count[s[j]] == freq[s[j]]) {
                    have++;
                }

                while (have == must) {
                    if (minLen > j - i + 1) {
                        minLen = j - i + 1;
                        res = s.substr(i, minLen);
                    }
                    if (count.find(s[i]) != count.end()) {
                        if (count[s[i]] == freq[s[i]]) have--;
                        count[s[i]]--;
                    }
                    i++;
                }
            }
        }
        return res;
    }
};
