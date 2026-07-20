class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int maxWindow = 0;
        int maxCnt = 0;
        int i = 0;
        for (int j = 0; j < s.size(); j++) {
            freq[s[j]]++;
            int winLeng = j - i + 1;
            maxCnt = max(maxCnt, freq[s[j]]);
            if (winLeng - maxCnt > k) {
                freq[s[i]]--;
                i++;
            } else {
                maxWindow = max(maxWindow, winLeng);
            }
        }
        return maxWindow;
    }
};
