class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> uset;
        int i = 0;
        int length = 0;
        for (int a = 0; a < s.length(); a++) {
            if (uset.find(s[a]) != uset.end()) {
                i = max(i, uset[s[a]] + 1);
            }
            uset[s[a]] = a;
            length = max(length, a - i + 1);
        }
        return length;
    }
};
