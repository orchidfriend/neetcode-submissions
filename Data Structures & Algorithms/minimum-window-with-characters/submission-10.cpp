class Solution {
   public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for (const auto& c : t) {
            freq[c]++;
        }
        unordered_map<char, int> counT;
        int must = freq.size();
        int have = 0;
        int i = 0;
        int minLength = s.size() + 1;
        pair<int,int> res;
        for (int j = 0; j < s.size(); j++) {
            counT[s[j]]++;
            if (freq.count(s[j]) && counT[s[j]] == freq[s[j]]) {
                have++;
            }
            while (have == must) {
                int leng = j - i + 1;
                if (minLength > leng) {
                    res = {i,leng};
                    minLength = leng;
                }
                if (freq.count(s[i]) && counT[s[i]] == freq[s[i]]) {
                    have--;
                }
                counT[s[i]]--;
                i++;
            }
        }
        return s.substr(res.first,res.second);
    }
};
