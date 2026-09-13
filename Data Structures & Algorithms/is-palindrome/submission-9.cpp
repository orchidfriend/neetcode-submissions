class Solution {
   public:
    bool isAlphaN(char c) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while (i < j && !isAlphaN(s[i])) i++;
            while (i < j && !isAlphaN(s[j])) j--;
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
