class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);
        if (s.size() != t.size()) return false;
        for (int a = 0; a < s.size(); a++) {
            count[s[a] - 'a']++;
            count[t[a] - 'a']--;
        }
        for (int a = 0; a < 26; a++) {
            if (count[a] != 0) return false;
        }
        return true;
    }
};
