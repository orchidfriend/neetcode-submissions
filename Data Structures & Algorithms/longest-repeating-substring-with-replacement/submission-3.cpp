class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int maxf = 0, winLen = 0;
        int i = 0;
        int res = 0;
        for (int j = 0; j < s.size(); j++) {
            freq[s[j]]++;
            maxf = max(maxf, freq[s[j]]);
            winLen = j - i + 1;
            if (winLen - maxf <= k) {
                res = max(res, winLen);
            } else {
                freq[s[i]]--;
                i++;
            }
        }
        return res;
    }
};
