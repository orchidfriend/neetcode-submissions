class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int maxCnt = 0, maxWindow = 0;
        int i = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j]]++;
            maxCnt = max(maxCnt, count[s[j]]);
            int window = j - i + 1;
            if (window - maxCnt > k) {
                count[s[i]]--;
                i++;
            } else {
                maxWindow = max(maxWindow, window);
            }
        }
        return maxWindow;
    }
};
