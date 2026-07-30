class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freq;
        int i = 0;
        int maxWindow = 0;
        int maxFreq = 0;

        for (int j = 0; j < s.size(); j++) {
            int window = j - i + 1;
            freq[s[j]]++;
            maxFreq = max(maxFreq, freq[s[j]]);
            if (window - maxFreq > k) {
                freq[s[i]]--;
                i++;
            } else {
                maxWindow = max(maxWindow, window);
            }
        }
        return maxWindow;
    }
};
