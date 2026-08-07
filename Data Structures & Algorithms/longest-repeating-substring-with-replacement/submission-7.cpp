class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int i = 0;
        int maxCount = 0;
        int maxWindow = 0;
        for (int j = 0; j < s.size(); j++) {
            int window = j - i + 1;
            count[s[j]]++;
            maxCount = max(maxCount, count[s[j]]);
            if (window - maxCount > k) {
                count[s[i]]--;
                i++;
            } else {
                maxWindow = max(maxWindow, window);
            }
        }
        return maxWindow;
    }
};
