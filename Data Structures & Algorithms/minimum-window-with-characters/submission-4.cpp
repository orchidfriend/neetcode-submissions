class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;

        for (const auto& c : t) {
            freq[c]++;
        }
        unordered_map<char, int> count;
        int must = freq.size();
        int have = 0;
        int minLength = s.size() + 1;
        int i = 0;
        string result;
        for (int j = 0; j < s.size(); j++) {
            if (freq.find(s[j]) != freq.end()) {
                count[s[j]]++;
                if (count[s[j]] == freq[s[j]]) {
                    have++;
                }
            }
            while (have == must) {
                int length = j - i + 1;
                if (length < minLength) {
                    result = s.substr(i, length);
                    minLength = length;
                }
                if (freq.find(s[i]) != freq.end()) {
                    if (count[s[i]] == freq[s[i]]) {
                        have--;
                    }
                    count[s[i]]--;
                }
                i++;
            }
        }
        return result;
    }
};
