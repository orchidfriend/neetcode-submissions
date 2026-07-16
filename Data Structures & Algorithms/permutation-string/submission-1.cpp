class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        sort(s1.begin(), s1.end());
        for (int a = 0; a + s1.size()-1 < s2.size(); a++) {
            string temps = s2.substr(a, s1.size());
            sort(temps.begin(), temps.end());
            if (s1 == temps) return true;
        }
        return false;
    }
};
