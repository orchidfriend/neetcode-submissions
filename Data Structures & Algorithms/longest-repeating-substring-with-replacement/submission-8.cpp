class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int i = 0;
        int maxWindow = 0;
        int maxCount = 0;
        for (int j = 0; j < s.size(); j++) {
            int window = j - i + 1;
            count[s[j]]++;
            maxCount = max(count[s[j]], maxCount);
            if (window - maxCount <= k) {
                if (window > maxWindow) {
                    maxWindow = window;
                }
            } else {
                count[s[i]]--;
                i++;
            }
        }
        return maxWindow;
    }
};
